#pragma once

class Complex
{
private:
  double Re;
  double Im;

public:
  Complex();
  Complex(double re, double im);
  Complex(const Complex& other);
  Complex operator +(const Complex& other);
  Complex operator *(const Complex& other);
  Complex operator -(const Complex& other);
  Complex operator /(const Complex& other);
  bool Equal(const Complex& other);
  void Printf();
};