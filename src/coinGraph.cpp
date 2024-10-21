#include "coinGraph.h"

void CoinGraph::print(){
  for (uint16_t i = 0; i < this->data.size(); i++){
    this->data.at(i).print();
  }
}
