#include "CThree.h"
#include <iostream>

CThree::CThree() {
  this->i=0;
};
CThree::CThree(string s, COne* c, int i) : CTwo(s, c) {
  this->i = i;
}
CThree::CThree(const CThree& other) : CTwo(other) {
  this->i = other.i;
}

int CThree::getI() {
  return this->i;
}

void CThree::setI(int i) {
  this->i = i;
}

void CThree::print() {
  cout << "Класс =CThree\n";
  CTwo::print();
  cout << "I     =" << this->i << endl;
}


