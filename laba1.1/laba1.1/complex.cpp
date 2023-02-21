#include "complex.h"
#include <iostream>

using namespace std;

Complex::Complex()
{
  Re = 0;
  Im = 0;
}

Complex::Complex(double Re, double Im)
{
  this->Re = Re;
  this->Im = Im;
}

Complex::Complex(const Complex& other)
{
  this->Re = other.Re;
  this->Im = other.Im;
}

Complex Complex :: operator +(const Complex& other)
{
  Complex result;
  result.Re = this->Re + other.Re;
  result.Im = this->Im + other.Im;
  return result;
}
Complex Complex :: operator *(const Complex& other)
{
  Complex result;
  result.Re = this->Re * other.Re - this->Im * other.Im;
  result.Im = this->Re * other.Im + this->Im * other.Re;
  return result;
}
Complex Complex :: operator -(const Complex& other)
{
  Complex result;
  result.Re = this->Re - other.Re;
  result.Im = this->Im - other.Im;
  return result;
}
Complex Complex :: operator /(const Complex& other)
{
  Complex result;
  result.Re = (this->Re * other.Re - this->Im * (-other.Im)) / (other.Re * other.Re + other.Im * other.Im);
  result.Im = (this->Im * other.Re - this->Re * other.Im) / (other.Re * other.Re + other.Im * other.Im);
  if (result.Im == 0)
  {
    cout << "Error!!" << endl;
    result.Re = 0;
    result.Im = 0;
    return result;
  }
  else return result;
}

bool Complex::Equal(const Complex& other)
{
  bool result = ((this->Re == other.Re) && (this->Im == other.Im));
  return result;
}

void Complex::Printf()
{
  if (Im >= 0)
  {
    if ((Im != 0) && (Re != 0))
    {
      cout << "\t" << Re << " + " << Im << "i" << endl << endl;
    }
    else if ((Im != 0) && (Re == 0))
    {
      cout << "\t" << "" << Im << "i" << endl << endl;
    }
    else if ((Im == 0) && (Re != 0))
    {
      cout << "\t" << Re << endl << endl;
    }
    else
    {
      cout << "\t  0 " << endl << endl;
    }
  }
  if (Im < 0)
  {
    if ((Im != 0) && (Re != 0))
    {
      cout << "\t" << Re << "  " << Im << "i" << endl << endl;
    }
    else if ((Im != 0) && (Re == 0))
    {
      cout << "\t" << "" << Im << "i" << endl << endl;
    }
    else if ((Im == 0) && (Re != 0))
    {
      cout << "\t" << Re << endl << endl;
    }
    else
    {
      cout << "\t  0 " << endl << endl;
    }
  }
}

