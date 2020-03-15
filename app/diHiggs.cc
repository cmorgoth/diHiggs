#include <iostream>
//ROOT
#include <TTree.h>
#include <TChain.h>
#include <TFile.h>
#include <TROOT.h>
//LOCAL
#include <Events.hh>

int main(int argc, char** argv)
{
  TChain* chain = new TChain("Events");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_1.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_2.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_3.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_4.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_5.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_6.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_7.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_8.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_9.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_10.root");
  chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_11.root");
  //chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_.root");
  //chain->Add("/mnt/hadoop/store/group/phys_exotica/privateProduction/NANOAOD/v1/GluGluToHHTo4B_node_SM_TuneCP5_PSWeights_13TeV-madgraph-pythia8/v1_RunIIAutumn18MiniAOD-102X_v15-v1/200312_210339/0000/RunIIAutumn18NanoAODv5_BulkGravTohhTohWWhbb_.root");

  Events* evt = new Events( chain );
  evt->Loop();

  return 0;
}
