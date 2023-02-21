#ifndef LAB2_4_CFOUR_H
#define LAB2_4_CFOUR_H
#include "CThree.h"

using namespace std;
class CFour : public CThree {
private:
  double d;
public:
  CFour();
  CFour(string s, COne* c, int i, double d);
  virtual ~CFour() = default ;
  CFour(const CFour& other);

  double getD();
  void setD(double d);

  virtual void print() override;
};
#endif 
