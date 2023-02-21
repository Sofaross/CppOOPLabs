#include "COne.h"
#include <iostream>

using namespace std;

COne::COne() 
{
  this->f = 0;
  char* buff = new char[] {"По умолчанию"};
  this->ps = buff ;
}
COne::COne(float f, char* ps) 
{
  this->f = f;
  this->ps = ps;
}
COne::COne(const COne& other) 
{
  this->f = other.f;
  this->ps = other.ps;
}

COne::~COne()
{
  delete[] ps;
}

float COne::getF()
{
  return this->f;
}

void COne::setF(float f)
{
  this->f = f;
}

char* COne::getPS()
{
  return this->ps;
}

void COne::setPS(char* ps)
{
  *this->ps = *ps;
}

void COne::print()
{
  cout << "Класс =COne\n";
  cout << "F     =" << this->f << endl;
  cout << "PS    =" << this->ps << endl;
}

COne& COne::operator=(const COne& other) {
  if (this == &other)
  {
  return *this;
  }
  f = other.f;
  int g = strlen(other.ps);
  char* buff=new char[g +1];
  for (int i = 0; i < g; i++)
    buff[i] = other.ps[i];
  buff[g] = '\0';
  if (ps != nullptr) delete[] ps;
  ps = buff;
  return *this;
}