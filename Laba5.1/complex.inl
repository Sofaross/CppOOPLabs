#include "complex.h"
#include <iostream>

using namespace std;

template<typename T>
Complex<T>::Complex()
{
    Re = 0;
    Im = 0;
}

template<typename T>
Complex<T>::Complex(T &Re, T &Im)
{
    this->Re = Re;
    this->Im = Im;
}

template<typename T>
Complex<T>::Complex(const Complex<T>& other)
{
    this->Re = other.Re;
    this->Im = other.Im;
}

template<typename T>
Complex<T> Complex<T>::operator+(const Complex<T>& other)
{
    Complex result;
    result.Re = this->Re + other.Re;
    result.Im = this->Im + other.Im;
    return result;
}
template<typename T>
Complex<T> Complex<T>::operator *(const Complex<T>& other)
{
    Complex result;
    result.Re = this->Re * other.Re - this->Im * other.Im;
    result.Im = this->Re * other.Im + this->Im * other.Re;
    return result;
}
template<typename T>
Complex<T> Complex<T>::operator -(const Complex<T>& other)
{
    Complex result;
    result.Re = this->Re - other.Re;
    result.Im = this->Im - other.Im;
    return result;
}
template<typename T>
Complex<T> Complex<T>::operator /(const Complex<T>& other)
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

template<typename T>
bool Complex<T>::Equal(const Complex<T>& other)
{
    bool result = ((this->Re == other.Re) && (this->Im == other.Im));
    return result;
}

template<typename T>
void Complex<T>::Printf()
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

