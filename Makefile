#Template Makefile for a simple executable created from a single cxx file and linked with the root librariess

MYMAIN	  = Main
MYMAINCXX = $(MYMAIN).cxx
MYMAINO	  = $(MYMAIN).o
MYMAINH   = $(MYMAIN).h
EXECUTABLE = $(MYMAIN).exe
#Uncomment the following line to change the header file location
#MYMAINH   = include/$(MYMAIN).h

#All header files and source files are expected in the current directory

#The first target defined is the default for the makefile
CXX	= /usr/bin/g++
RM	= /bin/rm -f
SHELL = /bin/sh
MAKE = /usr/bin/make

#A useful shortcut to the current makefile location
where-am-i=$(CURDIR)/$(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))
THISMAKEFILE := $(call where-am-i)

##### Library path and compiler / linker / rootcint options #####

LPATH		= lib 
CXXFLAGS	= -O -Wall -fPIC -lProof -lProofPlayer  
CXX		= g++
SOFLAGS		= -O -shared 

#If you want to compile in Debug mode
#Add information for gdb (the debugger) and do not optimize
#Uncomment to add debug information (-g) and do not optimize (-O0)
#DEBUGFLAGS      = -g -O0  

##### Libraries to pull in and flags #####

#for the dependency generation, it is often useful to add the last two directories 
#to supress warnings (and get the dependencies correct)
ROOTCFLAGS   	:= $(shell root-config --cflags) 
#-I${ROOTSYS}/cint/cint/include -I${ROOTSYS}/cint/cint/include/stl
ROOTLIBS     	:= $(shell root-config --libs)
ROOTGLIBS    	:= $(shell root-config --glibs)


#Uncomment the following line to add the include path ./include
CXXFLAGS	+= $(ROOTCFLAGS) -I./
#CXXFLAGS	+= $(ROOTCFLAGS) -I./include

SOFLAGS 	+= $(ROOTGLIBS) -L./

#Add specific options for our EXE to enable it to find shared libraries
EXEFLAGS        =   $(CXXFLAGS) -L./ $(ROOTGLIBS)

#If mode variable is debug, compile in debug mode
#to set the mode, type 'make mode=debug'
#Uncomment to allow the debug mode
#ifeq ($(mode),debug)
#CXXFLAGS+=$(DEBUGFLAGS)
#endif

##### All our targets#####

#add the name of each object here.  For example and assuming all your source code is 
#in the current directory, if a MyClass.{cpp,h} exists add a MyClass.o here.

#Add the name of each object here.  For example and assuming all your source code is
#in the current directory, if a MyClass.{cpp,h} exists add a libMyClass.so here.

#ALLLIBS		:= libhistreader.so
ALLEXES         := $(MYMAIN)

#finally, you presumably want to link your executable against all of the objects you wrote files for
EXEFLAGS        += $(ALLLIBS)

##### Rules #####
.SUFFIXES:   	.cxx .d 
#If you want to keep the intermediate .o file, use this, otherwise they get deleted
# - this is what happens with implicit rules
#.SECONDARY:     $(patsubst %.cpp, %.o, $(CPPFILES)) $(MYMAINO)

#add any targets that do not produce a file withthe same name as target to the .PHONY list.  This prevents make from thinking that a target is up to date in some circumstances.  Try removing clean from this list and adding a file called clean in your local directory.  Now make clean will fail.
.PHONY:  all clean

#Default target (without this line, the default target is the first dependency file to be insluded)
default:     all
###Generic rules####
#Compile a static object file from a source file
#Also, generate the object dependencies files  (.P files)  generically (include-file dependencies)
%.o: %.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@ 
ALLCXX = $(MYMAINCXX)
#for each file in list, substitute .cxx for .d and include

%.o: %.C
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


#build a list of cpp files, this is going to be used when we generate our header file dependencies automatically
#CPPFILES := histreader.cpp
#There is nothing to stop you automating this as well
#CPPFILES := $(shell ls *.cpp)
#Uncomment these to automatically build the include file dependencies
#This works by generating a .d file for every .cxx file which are filled with "target : deps" statements, but add no commands
#These are then included as part of the Makefile
#%.o: %.cxx
#	$(CXX) -MD $(CXXFLAGS) -c $< -o $@ 
#ALLCXX = $(MYMAINCXX)
#for each file in list, substitute .cxx for .d and include
#-include $(ALLCXX:.cxx=.d)
#
#%.o: %.C
#	$(CXX) -MD $(CXXFLAGS) -c $< -o $@ 
#-include $(CFILES:.C=.d)
#
#%.o: %.cpp
#	$(CXX) -MD $(CXXFLAGS) -c $< -o $@
#-include $(CPPFILES:.cpp=.d)

#Create a shared library
lib%.so: %.o
	$(CXX) $(SOFLAGS) -o $@ $^


##### Rules for specific targets #####

all: $(ALLLIBS) $(ALLEXES)

clean: 
	$(RM)  $(ALLLIBS) $(ALLEXES) *.o *.d *.P

#Specific rules will override generic rules:
mymain.o: mymain.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@ 
	@echo running specific rule

$(MYMAIN): $(MYMAINO) $(ALLLIBS)
	$(CXX) $(EXEFLAGS) $^ -o $@
