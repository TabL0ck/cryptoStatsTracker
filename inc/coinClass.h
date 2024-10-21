#pragma once
#include <string>
#include <iostream>

class Coin{
  private:
    std::string coinName;
    double USDTcost;
    double USDTderCoin;

  public:
    Coin(std::string coinName_t, double USDTcost_t, double USDTderCoin_t)
        : coinName {coinName_t}
        , USDTcost {USDTcost_t}
        , USDTderCoin {USDTderCoin_t}
    {}

    void print() const { std::cout << "Name : " << coinName << std::endl 
      << "USDTcost : " << USDTcost << std::endl << "USDTderCoin : " << USDTderCoin << std::endl; };
};
