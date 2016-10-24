#define vvjj_selector_cxx
// The class definition in vvjj_selector.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.


// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("vvjj_selector.C")
// root> T->Process("vvjj_selector.C","some options")
// root> T->Process("vvjj_selector.C+")
//


#include "vvjj_selector.h"
#include <TH2.h>
#include <TStyle.h>

void vvjj_selector::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
   Info("Begin", "starting a simple exercise with process option: %s", option.Data());
}

void vvjj_selector::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   h_pt1 = new TH1F("h_pt1","Leading p_{T} Distribution",100,400,2000);
   h_pt1->SetDirectory(0);
   h_pt1->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   h_pt1->GetYaxis()->SetTitle("Events");

   h_eta1 = new TH1F("h_eta1","Leading #eta Distribution",100,-4,4);
   h_eta1->SetDirectory(0);
   h_eta1->GetXaxis()->SetTitle("Leading jet #eta");
   h_eta1->GetYaxis()->SetTitle("Events");

   //Histogram passing basic event selection
   h_pt1_basic = new TH1F("h_pt1_basic","Leading p_{T} Distribution",100,400,2000);
   h_pt1_basic->SetDirectory(0);
   h_pt1_basic->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   h_pt1_basic->GetYaxis()->SetTitle("Events");

   h_eta1_basic = new TH1F("h_eta1_basic","Leading #eta Distribution",100,-4,4);
   h_eta1_basic->SetDirectory(0);
   h_eta1_basic->GetXaxis()->SetTitle("Leading jet #eta");
   h_eta1_basic->GetYaxis()->SetTitle("Events");
   
   fOutput->Add(h_pt1);
   fOutput->Add(h_eta1);
   fOutput->Add(h_pt1_basic);
   fOutput->Add(h_eta1_basic);
   

}

Bool_t vvjj_selector::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // When processing keyed objects with PROOF, the object is already loaded
   // and is available via the fObject pointer.
   //
   // This function should contain the \"body\" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

   fReader.SetLocalEntry(entry);
      
   h_pt1->Fill(*jetTrim1_pt);
   h_eta1->Fill(*jetTrim1_eta);

   if (!(*passedRun2Presel && *jetTrim1_m>50 && *jetTrim2_m>50)) return kFALSE;

   h_pt1_basic->Fill(*jetTrim1_pt,*wt);
   h_eta1_basic->Fill(*jetTrim1_eta,*wt);
      
   
   return kTRUE;
}

void vvjj_selector::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void vvjj_selector::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.
  h_pt1=dynamic_cast<TH1F*>(fOutput->FindObject("h_pt1"));
  h_pt1_basic=dynamic_cast<TH1F*>(fOutput->FindObject("h_pt1_basic"));
  h_eta1=dynamic_cast<TH1F*>(fOutput->FindObject("h_eta1"));
  h_eta1_basic=dynamic_cast<TH1F*>(fOutput->FindObject("h_eta1_basic"));

  TFile *fOut = new TFile("output_1a.root", "recreate");
  h_pt1->Write();
  h_eta1->Write();
  h_pt1_basic->Write();
  h_eta1_basic->Write();
  fOut->Write();
  fOut->Close();
  

}
