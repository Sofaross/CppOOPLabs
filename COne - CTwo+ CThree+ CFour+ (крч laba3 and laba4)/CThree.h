#ifndef LAB2_4_CTHREE_H
#define LAB2_4_CTHREE_H
#include "CTwo.h"

class CThree : public CTwo {
private:
  int i;
public:
  CThree();
  CThree(string s, COne* c, int i);
  virtual ~CThree() = default;
  CThree(const CThree& other);

  int getI();
  void setI(int i);

  virtual void print() override;
};
#endif
