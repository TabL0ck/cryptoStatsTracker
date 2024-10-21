#include "coinTimestamp.h"

void CoinTimestamp::print(){
  this->coin.print();
  std::cout << "Datetime : " << asctime(this->date) << std::endl;
}
