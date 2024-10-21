#pragma once
#include <vector>
#include <stdint.h>

#include "coinTimestamp.h"

class CoinGraph{
  private:
    std::vector<CoinTimestamp> data;
    
  public:
    CoinGraph(){};
    void addDataToGraph(CoinTimestamp ct){ data.push_back(ct); };
    void print();
};
