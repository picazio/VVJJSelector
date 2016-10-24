//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Oct 22 19:57:51 2016 by ROOT version 6.06/08
// from TTree dibjet/dibjet
// found on file: data15_3p2ifb_slim.root
//////////////////////////////////////////////////////////

#ifndef vvjj_selector_h
#define vvjj_selector_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include <TH1.h>
#include <TH2.h>


// Headers needed by this particular selector


class vvjj_selector : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   //Histogram declarations:
   TH1F*   h_pt1=0;  
   TH1F*   h_eta1=0; 

   TH1F*   h_pt1_basic=0; 
   TH1F*   h_eta1_basic=0; 

   
   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<Int_t> run = {fReader, "run"};
   TTreeReaderValue<Int_t> mcChannel = {fReader, "mcChannel"};
   TTreeReaderValue<Bool_t> passedJetPreselection = {fReader, "passedJetPreselection"};
   TTreeReaderValue<Bool_t> passedTrimJetPreselection = {fReader, "passedTrimJetPreselection"};
   TTreeReaderValue<Bool_t> passedEventCleaning = {fReader, "passedEventCleaning"};
   TTreeReaderValue<Bool_t> passedJetCleaning = {fReader, "passedJetCleaning"};
   TTreeReaderValue<Bool_t> passedTrigger = {fReader, "passedTrigger"};
   TTreeReaderValue<Bool_t> passedRun1Presel = {fReader, "passedRun1Presel"};
   TTreeReaderValue<Bool_t> passedRun1WZMass = {fReader, "passedRun1WZMass"};
   TTreeReaderValue<Bool_t> passedRun1WZD2 = {fReader, "passedRun1WZD2"};
   TTreeReaderValue<Bool_t> passedRun1WZ = {fReader, "passedRun1WZ"};
   TTreeReaderValue<Bool_t> passedRun1WWMass = {fReader, "passedRun1WWMass"};
   TTreeReaderValue<Bool_t> passedRun1WWD2 = {fReader, "passedRun1WWD2"};
   TTreeReaderValue<Bool_t> passedRun1WW = {fReader, "passedRun1WW"};
   TTreeReaderValue<Bool_t> passedRun1ZZMass = {fReader, "passedRun1ZZMass"};
   TTreeReaderValue<Bool_t> passedRun1ZZD2 = {fReader, "passedRun1ZZD2"};
   TTreeReaderValue<Bool_t> passedRun1ZZ = {fReader, "passedRun1ZZ"};
   TTreeReaderValue<Bool_t> passedRun2Presel = {fReader, "passedRun2Presel"};
   TTreeReaderValue<Bool_t> passedRun2WZMass = {fReader, "passedRun2WZMass"};
   TTreeReaderValue<Bool_t> passedRun2WZD2 = {fReader, "passedRun2WZD2"};
   TTreeReaderValue<Bool_t> passedRun2WZ = {fReader, "passedRun2WZ"};
   TTreeReaderValue<Bool_t> passedRun2WWMass = {fReader, "passedRun2WWMass"};
   TTreeReaderValue<Bool_t> passedRun2WWD2 = {fReader, "passedRun2WWD2"};
   TTreeReaderValue<Bool_t> passedRun2WW = {fReader, "passedRun2WW"};
   TTreeReaderValue<Bool_t> passedRun2ZZMass = {fReader, "passedRun2ZZMass"};
   TTreeReaderValue<Bool_t> passedRun2ZZD2 = {fReader, "passedRun2ZZD2"};
   TTreeReaderValue<Bool_t> passedRun2ZZ = {fReader, "passedRun2ZZ"};
   TTreeReaderValue<ULong64_t> event = {fReader, "event"};
   TTreeReaderValue<Int_t> lumiblock = {fReader, "lumiblock"};
   TTreeReaderValue<Float_t> averageIntPerXing = {fReader, "averageIntPerXing"};
   TTreeReaderValue<Float_t> actualIntPerXing = {fReader, "actualIntPerXing"};
   TTreeReaderValue<Int_t> npv2 = {fReader, "npv2"};
   TTreeReaderValue<Int_t> pv_ntrk = {fReader, "pv_ntrk"};
   TTreeReaderValue<Float_t> wt = {fReader, "wt"};
   TTreeReaderValue<Float_t> met = {fReader, "met"};
   TTreeReaderValue<Int_t> nelectrons = {fReader, "nelectrons"};
   TTreeReaderValue<Int_t> nmuons = {fReader, "nmuons"};
   TTreeReaderValue<Int_t> njet = {fReader, "njet"};
   TTreeReaderValue<Int_t> njetTrim = {fReader, "njetTrim"};
   TTreeReaderValue<Float_t> jet12_m = {fReader, "jet12_m"};
   TTreeReaderValue<Float_t> jet12_pt = {fReader, "jet12_pt"};
   TTreeReaderValue<Float_t> jet12_eta = {fReader, "jet12_eta"};
   TTreeReaderValue<Float_t> jet12_phi = {fReader, "jet12_phi"};
   TTreeReaderValue<Float_t> jetTrim12_m = {fReader, "jetTrim12_m"};
   TTreeReaderValue<Float_t> jetTrim12_pt = {fReader, "jetTrim12_pt"};
   TTreeReaderValue<Float_t> jetTrim12_eta = {fReader, "jetTrim12_eta"};
   TTreeReaderValue<Float_t> jetTrim12_phi = {fReader, "jetTrim12_phi"};
   TTreeReaderValue<Float_t> jet1_aplanarity = {fReader, "jet1_aplanarity"};
   TTreeReaderValue<Float_t> jet1_c2beta1 = {fReader, "jet1_c2beta1"};
   TTreeReaderValue<Float_t> jet1_d2beta1 = {fReader, "jet1_d2beta1"};
   TTreeReaderValue<Float_t> jet1_e = {fReader, "jet1_e"};
   TTreeReaderValue<Float_t> jet1_eta = {fReader, "jet1_eta"};
   TTreeReaderValue<Float_t> jet1_grooncon = {fReader, "jet1_grooncon"};
   TTreeReaderValue<Float_t> jet1_groosplit12 = {fReader, "jet1_groosplit12"};
   TTreeReaderValue<Float_t> jet1_grootau1 = {fReader, "jet1_grootau1"};
   TTreeReaderValue<Float_t> jet1_grootau2 = {fReader, "jet1_grootau2"};
   TTreeReaderValue<Float_t> jet1_grootau21 = {fReader, "jet1_grootau21"};
   TTreeReaderValue<Float_t> jet1_grootau32 = {fReader, "jet1_grootau32"};
   TTreeReaderValue<Float_t> jet1_m = {fReader, "jet1_m"};
   TTreeReaderValue<Float_t> jet1_mTA = {fReader, "jet1_mTA"};
   TTreeReaderValue<Float_t> jet1_mufilt = {fReader, "jet1_mufilt"};
   TTreeReaderValue<Float_t> jet1_ngtrk = {fReader, "jet1_ngtrk"};
   TTreeReaderValue<Float_t> jet1_pdgId = {fReader, "jet1_pdgId"};
   TTreeReaderValue<Float_t> jet1_phi = {fReader, "jet1_phi"};
   TTreeReaderValue<Float_t> jet1_planarflow = {fReader, "jet1_planarflow"};
   TTreeReaderValue<Float_t> jet1_pt = {fReader, "jet1_pt"};
   TTreeReaderValue<Float_t> jet1_ptTA = {fReader, "jet1_ptTA"};
   TTreeReaderValue<Float_t> jet1_sphericity = {fReader, "jet1_sphericity"};
   TTreeReaderValue<Float_t> jet1_trkwidth = {fReader, "jet1_trkwidth"};
   TTreeReaderValue<Float_t> jet1_ungre = {fReader, "jet1_ungre"};
   TTreeReaderValue<Float_t> jet1_ungreta = {fReader, "jet1_ungreta"};
   TTreeReaderValue<Float_t> jet1_ungrm = {fReader, "jet1_ungrm"};
   TTreeReaderValue<Float_t> jet1_ungrngtrk = {fReader, "jet1_ungrngtrk"};
   TTreeReaderValue<Float_t> jet1_ungrphi = {fReader, "jet1_ungrphi"};
   TTreeReaderValue<Float_t> jet1_ungrpt = {fReader, "jet1_ungrpt"};
   TTreeReaderValue<Float_t> jet1_ungry = {fReader, "jet1_ungry"};
   TTreeReaderValue<Float_t> jet1_y = {fReader, "jet1_y"};
   TTreeReaderValue<Float_t> jet1_ysfilt = {fReader, "jet1_ysfilt"};
   TTreeReaderValue<Float_t> jet2_aplanarity = {fReader, "jet2_aplanarity"};
   TTreeReaderValue<Float_t> jet2_c2beta1 = {fReader, "jet2_c2beta1"};
   TTreeReaderValue<Float_t> jet2_d2beta1 = {fReader, "jet2_d2beta1"};
   TTreeReaderValue<Float_t> jet2_e = {fReader, "jet2_e"};
   TTreeReaderValue<Float_t> jet2_eta = {fReader, "jet2_eta"};
   TTreeReaderValue<Float_t> jet2_grooncon = {fReader, "jet2_grooncon"};
   TTreeReaderValue<Float_t> jet2_groosplit12 = {fReader, "jet2_groosplit12"};
   TTreeReaderValue<Float_t> jet2_grootau1 = {fReader, "jet2_grootau1"};
   TTreeReaderValue<Float_t> jet2_grootau2 = {fReader, "jet2_grootau2"};
   TTreeReaderValue<Float_t> jet2_grootau21 = {fReader, "jet2_grootau21"};
   TTreeReaderValue<Float_t> jet2_grootau32 = {fReader, "jet2_grootau32"};
   TTreeReaderValue<Float_t> jet2_m = {fReader, "jet2_m"};
   TTreeReaderValue<Float_t> jet2_mTA = {fReader, "jet2_mTA"};
   TTreeReaderValue<Float_t> jet2_mufilt = {fReader, "jet2_mufilt"};
   TTreeReaderValue<Float_t> jet2_ngtrk = {fReader, "jet2_ngtrk"};
   TTreeReaderValue<Float_t> jet2_pdgId = {fReader, "jet2_pdgId"};
   TTreeReaderValue<Float_t> jet2_phi = {fReader, "jet2_phi"};
   TTreeReaderValue<Float_t> jet2_planarflow = {fReader, "jet2_planarflow"};
   TTreeReaderValue<Float_t> jet2_pt = {fReader, "jet2_pt"};
   TTreeReaderValue<Float_t> jet2_ptTA = {fReader, "jet2_ptTA"};
   TTreeReaderValue<Float_t> jet2_sphericity = {fReader, "jet2_sphericity"};
   TTreeReaderValue<Float_t> jet2_trkwidth = {fReader, "jet2_trkwidth"};
   TTreeReaderValue<Float_t> jet2_ungre = {fReader, "jet2_ungre"};
   TTreeReaderValue<Float_t> jet2_ungreta = {fReader, "jet2_ungreta"};
   TTreeReaderValue<Float_t> jet2_ungrm = {fReader, "jet2_ungrm"};
   TTreeReaderValue<Float_t> jet2_ungrngtrk = {fReader, "jet2_ungrngtrk"};
   TTreeReaderValue<Float_t> jet2_ungrphi = {fReader, "jet2_ungrphi"};
   TTreeReaderValue<Float_t> jet2_ungrpt = {fReader, "jet2_ungrpt"};
   TTreeReaderValue<Float_t> jet2_ungry = {fReader, "jet2_ungry"};
   TTreeReaderValue<Float_t> jet2_y = {fReader, "jet2_y"};
   TTreeReaderValue<Float_t> jet2_ysfilt = {fReader, "jet2_ysfilt"};
   TTreeReaderValue<Float_t> jet3_aplanarity = {fReader, "jet3_aplanarity"};
   TTreeReaderValue<Float_t> jet3_c2beta1 = {fReader, "jet3_c2beta1"};
   TTreeReaderValue<Float_t> jet3_d2beta1 = {fReader, "jet3_d2beta1"};
   TTreeReaderValue<Float_t> jet3_e = {fReader, "jet3_e"};
   TTreeReaderValue<Float_t> jet3_eta = {fReader, "jet3_eta"};
   TTreeReaderValue<Float_t> jet3_grooncon = {fReader, "jet3_grooncon"};
   TTreeReaderValue<Float_t> jet3_groosplit12 = {fReader, "jet3_groosplit12"};
   TTreeReaderValue<Float_t> jet3_grootau1 = {fReader, "jet3_grootau1"};
   TTreeReaderValue<Float_t> jet3_grootau2 = {fReader, "jet3_grootau2"};
   TTreeReaderValue<Float_t> jet3_grootau21 = {fReader, "jet3_grootau21"};
   TTreeReaderValue<Float_t> jet3_grootau32 = {fReader, "jet3_grootau32"};
   TTreeReaderValue<Float_t> jet3_m = {fReader, "jet3_m"};
   TTreeReaderValue<Float_t> jet3_mTA = {fReader, "jet3_mTA"};
   TTreeReaderValue<Float_t> jet3_mufilt = {fReader, "jet3_mufilt"};
   TTreeReaderValue<Float_t> jet3_ngtrk = {fReader, "jet3_ngtrk"};
   TTreeReaderValue<Float_t> jet3_pdgId = {fReader, "jet3_pdgId"};
   TTreeReaderValue<Float_t> jet3_phi = {fReader, "jet3_phi"};
   TTreeReaderValue<Float_t> jet3_planarflow = {fReader, "jet3_planarflow"};
   TTreeReaderValue<Float_t> jet3_pt = {fReader, "jet3_pt"};
   TTreeReaderValue<Float_t> jet3_ptTA = {fReader, "jet3_ptTA"};
   TTreeReaderValue<Float_t> jet3_sphericity = {fReader, "jet3_sphericity"};
   TTreeReaderValue<Float_t> jet3_trkwidth = {fReader, "jet3_trkwidth"};
   TTreeReaderValue<Float_t> jet3_ungre = {fReader, "jet3_ungre"};
   TTreeReaderValue<Float_t> jet3_ungreta = {fReader, "jet3_ungreta"};
   TTreeReaderValue<Float_t> jet3_ungrm = {fReader, "jet3_ungrm"};
   TTreeReaderValue<Float_t> jet3_ungrngtrk = {fReader, "jet3_ungrngtrk"};
   TTreeReaderValue<Float_t> jet3_ungrphi = {fReader, "jet3_ungrphi"};
   TTreeReaderValue<Float_t> jet3_ungrpt = {fReader, "jet3_ungrpt"};
   TTreeReaderValue<Float_t> jet3_ungry = {fReader, "jet3_ungry"};
   TTreeReaderValue<Float_t> jet3_y = {fReader, "jet3_y"};
   TTreeReaderValue<Float_t> jet3_ysfilt = {fReader, "jet3_ysfilt"};
   TTreeReaderValue<Float_t> jetTrim1_aplanarity = {fReader, "jetTrim1_aplanarity"};
   TTreeReaderValue<Float_t> jetTrim1_c2beta1 = {fReader, "jetTrim1_c2beta1"};
   TTreeReaderValue<Float_t> jetTrim1_d2beta1 = {fReader, "jetTrim1_d2beta1"};
   TTreeReaderValue<Float_t> jetTrim1_e = {fReader, "jetTrim1_e"};
   TTreeReaderValue<Float_t> jetTrim1_eta = {fReader, "jetTrim1_eta"};
   TTreeReaderValue<Float_t> jetTrim1_grooncon = {fReader, "jetTrim1_grooncon"};
   TTreeReaderValue<Float_t> jetTrim1_groosplit12 = {fReader, "jetTrim1_groosplit12"};
   TTreeReaderValue<Float_t> jetTrim1_grootau1 = {fReader, "jetTrim1_grootau1"};
   TTreeReaderValue<Float_t> jetTrim1_grootau2 = {fReader, "jetTrim1_grootau2"};
   TTreeReaderValue<Float_t> jetTrim1_grootau21 = {fReader, "jetTrim1_grootau21"};
   TTreeReaderValue<Float_t> jetTrim1_grootau32 = {fReader, "jetTrim1_grootau32"};
   TTreeReaderValue<Float_t> jetTrim1_m = {fReader, "jetTrim1_m"};
   TTreeReaderValue<Float_t> jetTrim1_mTA = {fReader, "jetTrim1_mTA"};
   TTreeReaderValue<Float_t> jetTrim1_mufilt = {fReader, "jetTrim1_mufilt"};
   TTreeReaderValue<Float_t> jetTrim1_ngtrk = {fReader, "jetTrim1_ngtrk"};
   TTreeReaderValue<Float_t> jetTrim1_pdgId = {fReader, "jetTrim1_pdgId"};
   TTreeReaderValue<Float_t> jetTrim1_phi = {fReader, "jetTrim1_phi"};
   TTreeReaderValue<Float_t> jetTrim1_planarflow = {fReader, "jetTrim1_planarflow"};
   TTreeReaderValue<Float_t> jetTrim1_pt = {fReader, "jetTrim1_pt"};
   TTreeReaderValue<Float_t> jetTrim1_ptTA = {fReader, "jetTrim1_ptTA"};
   TTreeReaderValue<Float_t> jetTrim1_sphericity = {fReader, "jetTrim1_sphericity"};
   TTreeReaderValue<Float_t> jetTrim1_trkwidth = {fReader, "jetTrim1_trkwidth"};
   TTreeReaderValue<Float_t> jetTrim1_ungre = {fReader, "jetTrim1_ungre"};
   TTreeReaderValue<Float_t> jetTrim1_ungreta = {fReader, "jetTrim1_ungreta"};
   TTreeReaderValue<Float_t> jetTrim1_ungrm = {fReader, "jetTrim1_ungrm"};
   TTreeReaderValue<Float_t> jetTrim1_ungrngtrk = {fReader, "jetTrim1_ungrngtrk"};
   TTreeReaderValue<Float_t> jetTrim1_ungrphi = {fReader, "jetTrim1_ungrphi"};
   TTreeReaderValue<Float_t> jetTrim1_ungrpt = {fReader, "jetTrim1_ungrpt"};
   TTreeReaderValue<Float_t> jetTrim1_ungry = {fReader, "jetTrim1_ungry"};
   TTreeReaderValue<Float_t> jetTrim1_y = {fReader, "jetTrim1_y"};
   TTreeReaderValue<Float_t> jetTrim1_ysfilt = {fReader, "jetTrim1_ysfilt"};
   TTreeReaderValue<Float_t> jetTrim2_aplanarity = {fReader, "jetTrim2_aplanarity"};
   TTreeReaderValue<Float_t> jetTrim2_c2beta1 = {fReader, "jetTrim2_c2beta1"};
   TTreeReaderValue<Float_t> jetTrim2_d2beta1 = {fReader, "jetTrim2_d2beta1"};
   TTreeReaderValue<Float_t> jetTrim2_e = {fReader, "jetTrim2_e"};
   TTreeReaderValue<Float_t> jetTrim2_eta = {fReader, "jetTrim2_eta"};
   TTreeReaderValue<Float_t> jetTrim2_grooncon = {fReader, "jetTrim2_grooncon"};
   TTreeReaderValue<Float_t> jetTrim2_groosplit12 = {fReader, "jetTrim2_groosplit12"};
   TTreeReaderValue<Float_t> jetTrim2_grootau1 = {fReader, "jetTrim2_grootau1"};
   TTreeReaderValue<Float_t> jetTrim2_grootau2 = {fReader, "jetTrim2_grootau2"};
   TTreeReaderValue<Float_t> jetTrim2_grootau21 = {fReader, "jetTrim2_grootau21"};
   TTreeReaderValue<Float_t> jetTrim2_grootau32 = {fReader, "jetTrim2_grootau32"};
   TTreeReaderValue<Float_t> jetTrim2_m = {fReader, "jetTrim2_m"};
   TTreeReaderValue<Float_t> jetTrim2_mTA = {fReader, "jetTrim2_mTA"};
   TTreeReaderValue<Float_t> jetTrim2_mufilt = {fReader, "jetTrim2_mufilt"};
   TTreeReaderValue<Float_t> jetTrim2_ngtrk = {fReader, "jetTrim2_ngtrk"};
   TTreeReaderValue<Float_t> jetTrim2_pdgId = {fReader, "jetTrim2_pdgId"};
   TTreeReaderValue<Float_t> jetTrim2_phi = {fReader, "jetTrim2_phi"};
   TTreeReaderValue<Float_t> jetTrim2_planarflow = {fReader, "jetTrim2_planarflow"};
   TTreeReaderValue<Float_t> jetTrim2_pt = {fReader, "jetTrim2_pt"};
   TTreeReaderValue<Float_t> jetTrim2_ptTA = {fReader, "jetTrim2_ptTA"};
   TTreeReaderValue<Float_t> jetTrim2_sphericity = {fReader, "jetTrim2_sphericity"};
   TTreeReaderValue<Float_t> jetTrim2_trkwidth = {fReader, "jetTrim2_trkwidth"};
   TTreeReaderValue<Float_t> jetTrim2_ungre = {fReader, "jetTrim2_ungre"};
   TTreeReaderValue<Float_t> jetTrim2_ungreta = {fReader, "jetTrim2_ungreta"};
   TTreeReaderValue<Float_t> jetTrim2_ungrm = {fReader, "jetTrim2_ungrm"};
   TTreeReaderValue<Float_t> jetTrim2_ungrngtrk = {fReader, "jetTrim2_ungrngtrk"};
   TTreeReaderValue<Float_t> jetTrim2_ungrphi = {fReader, "jetTrim2_ungrphi"};
   TTreeReaderValue<Float_t> jetTrim2_ungrpt = {fReader, "jetTrim2_ungrpt"};
   TTreeReaderValue<Float_t> jetTrim2_ungry = {fReader, "jetTrim2_ungry"};
   TTreeReaderValue<Float_t> jetTrim2_y = {fReader, "jetTrim2_y"};
   TTreeReaderValue<Float_t> jetTrim2_ysfilt = {fReader, "jetTrim2_ysfilt"};
   TTreeReaderValue<Float_t> jetTrim3_aplanarity = {fReader, "jetTrim3_aplanarity"};
   TTreeReaderValue<Float_t> jetTrim3_c2beta1 = {fReader, "jetTrim3_c2beta1"};
   TTreeReaderValue<Float_t> jetTrim3_d2beta1 = {fReader, "jetTrim3_d2beta1"};
   TTreeReaderValue<Float_t> jetTrim3_e = {fReader, "jetTrim3_e"};
   TTreeReaderValue<Float_t> jetTrim3_eta = {fReader, "jetTrim3_eta"};
   TTreeReaderValue<Float_t> jetTrim3_grooncon = {fReader, "jetTrim3_grooncon"};
   TTreeReaderValue<Float_t> jetTrim3_groosplit12 = {fReader, "jetTrim3_groosplit12"};
   TTreeReaderValue<Float_t> jetTrim3_grootau1 = {fReader, "jetTrim3_grootau1"};
   TTreeReaderValue<Float_t> jetTrim3_grootau2 = {fReader, "jetTrim3_grootau2"};
   TTreeReaderValue<Float_t> jetTrim3_grootau21 = {fReader, "jetTrim3_grootau21"};
   TTreeReaderValue<Float_t> jetTrim3_grootau32 = {fReader, "jetTrim3_grootau32"};
   TTreeReaderValue<Float_t> jetTrim3_m = {fReader, "jetTrim3_m"};
   TTreeReaderValue<Float_t> jetTrim3_mTA = {fReader, "jetTrim3_mTA"};
   TTreeReaderValue<Float_t> jetTrim3_mufilt = {fReader, "jetTrim3_mufilt"};
   TTreeReaderValue<Float_t> jetTrim3_ngtrk = {fReader, "jetTrim3_ngtrk"};
   TTreeReaderValue<Float_t> jetTrim3_pdgId = {fReader, "jetTrim3_pdgId"};
   TTreeReaderValue<Float_t> jetTrim3_phi = {fReader, "jetTrim3_phi"};
   TTreeReaderValue<Float_t> jetTrim3_planarflow = {fReader, "jetTrim3_planarflow"};
   TTreeReaderValue<Float_t> jetTrim3_pt = {fReader, "jetTrim3_pt"};
   TTreeReaderValue<Float_t> jetTrim3_ptTA = {fReader, "jetTrim3_ptTA"};
   TTreeReaderValue<Float_t> jetTrim3_sphericity = {fReader, "jetTrim3_sphericity"};
   TTreeReaderValue<Float_t> jetTrim3_trkwidth = {fReader, "jetTrim3_trkwidth"};
   TTreeReaderValue<Float_t> jetTrim3_ungre = {fReader, "jetTrim3_ungre"};
   TTreeReaderValue<Float_t> jetTrim3_ungreta = {fReader, "jetTrim3_ungreta"};
   TTreeReaderValue<Float_t> jetTrim3_ungrm = {fReader, "jetTrim3_ungrm"};
   TTreeReaderValue<Float_t> jetTrim3_ungrngtrk = {fReader, "jetTrim3_ungrngtrk"};
   TTreeReaderValue<Float_t> jetTrim3_ungrphi = {fReader, "jetTrim3_ungrphi"};
   TTreeReaderValue<Float_t> jetTrim3_ungrpt = {fReader, "jetTrim3_ungrpt"};
   TTreeReaderValue<Float_t> jetTrim3_ungry = {fReader, "jetTrim3_ungry"};
   TTreeReaderValue<Float_t> jetTrim3_y = {fReader, "jetTrim3_y"};
   TTreeReaderValue<Float_t> jetTrim3_ysfilt = {fReader, "jetTrim3_ysfilt"};


   vvjj_selector(TTree * /*tree*/ =0) { }
   virtual ~vvjj_selector() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(vvjj_selector,0);

};

#endif

#ifdef vvjj_selector_cxx
void vvjj_selector::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t vvjj_selector::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef vvjj_selector_cxx
