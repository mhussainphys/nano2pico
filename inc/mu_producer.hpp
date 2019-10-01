#ifndef H_MU_PRODUCER
#define H_MU_PRODUCER


#include "nano_tree.hpp"
#include "pico_tree.hpp"

class MuonProducer{
public:

  explicit MuonProducer(int year);
  ~MuonProducer();

  const float SignalMuonPtCut  = 20.0;
  const float VetoMuonPtCut    = 10.0;
  const float MuonEtaCut         = 2.4;
  const float MuonMiniIsoCut     = 0.2;

  std::vector<int> WriteMuons(nano_tree &nano, pico_tree &pico);

private:
  int year;
  
};

#endif