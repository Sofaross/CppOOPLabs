#ifndef LAB2_4_CONE_H
#define LAB2_4_CONE_H

class COne
{
private:
  float f;
  char* ps;
public:
  COne();
  COne(float f, char* ps);
  ~COne();
  COne(const COne& other);
 

  float getF();
  void  setF(float f);

  char* getPS();
  void setPS(char* ps);

  void print();

  COne& operator=(const COne& right);
};


#endif