#ifndef COMPLEX_H
#define COMPLEX_H

template<typename T>
class Complex
{
private:
    T Re;
    T Im;

public:
    Complex();
    Complex(T &Re, T &Im);
    Complex(const Complex<T>& other);
    Complex operator +(const Complex<T>& other);
    Complex operator *(const Complex<T>& other);
    Complex operator -(const Complex<T>& other);
    Complex operator /(const Complex<T>& other);
    bool Equal(const Complex& other);
    void Printf();
};

#include "complex.inl"
#endif

