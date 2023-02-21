#include "CFour.h"
#include <iostream>

using namespace std;

CFour::CFour() {
  this->d=0;
}
CFour::CFour(string s, COne* c, int i, double d) : CThree(s, c, i) {
  this->d=0;
}
CFour::CFour(const CFour& other) : CThree(other) {
  this->d = other.d;
}

double CFour::getD() {
  return this->d;
}
void CFour::setD(double d) {
  this->d = d;
}

void CFour::print() {
  cout << "Класс =CFour\n";
  CThree::print();
  cout << "D     =" << this->d << '\n';
}


