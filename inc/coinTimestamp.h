#pragma once
#include <string>
#include <iostream>
#include <ctime>

#include "coinClass.h"

class CoinTimestamp{
  private:
    struct tm *date;
    
  public:
    Coin coin;
    CoinTimestamp(Coin coin_t, struct tm *date_t)
      : coin {coin_t}
      , date {date_t}
    {}

    void print();
};
