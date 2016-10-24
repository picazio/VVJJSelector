#include "TROOT.h"
#include "TChain.h"
#include "TProof.h"
#include <iostream>

using namespace std;
int main() {

  TProof *p = TProof::Open("workers=2");
  p->SetProgressDialog(0);
  TChain *ch = new TChain("dibjet");

  ch->Add("../data15_3p2ifb_slim.root");
  ch->Add("../data16_12p2ifb_297730_303892_slim.root");
  ch->Add("../data16_13p3ifb_303943_308084_slim.root");
  
  // Tell root to run the chain on proof
  ch->SetProof();

  cout<<"Start analyzing the chain ..."<<endl;
  ch->Process("vvjj_selector.C+");
  
  // also "+" suffix is always recommended: // ch->Process("OccAnalysis.C+");
  cout<<" ... analyzing the chain completed"<<endl;
  cout<<" ... writing output done "<<endl;
}
