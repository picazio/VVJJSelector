# VVJJSelector
Vvjj selector using TProof

This is a simple TSelector created from vvjj ntuple produced by Edinbourg Framework.
This simple project uses the Main.cxx file to run the TSelector class over the data or QCD ntuples.

The directory has a simple Makefile that links the root libraries and compile the Main.cxx .

To run the code:

1) compile the Main.cxx: 
    
    $make
    
2) run the executable:

    $./Main
    
Let me know if have any problems.

By default, the jobs runs over 2 workers. You can change this setting in Main.cxx.

  
