#include "cryptoStatsTracker.h"

//#define    COIN_TEST

int main(){
#ifdef COIN_TEST
  time_t tt;
  struct tm* ti;

  time(&tt);
  ti = localtime(&tt);
  

  Coin trxCoin = Coin("TRX", 15.22, 88.12);
  CoinTimestamp temp = CoinTimestamp(trxCoin, ti);
  CoinGraph tempGraph = CoinGraph();
  
  tempGraph.addDataToGraph(temp);
  temp = CoinTimestamp(trxCoin, ti);

  tempGraph.addDataToGraph(temp);
  temp = CoinTimestamp(trxCoin, ti);
  
  tempGraph.addDataToGraph(temp);
  temp = CoinTimestamp(trxCoin, ti);
  
  tempGraph.print();

#endif
  
  return 0;
}
