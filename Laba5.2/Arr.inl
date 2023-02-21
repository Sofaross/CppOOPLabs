#include <iostream>
#include <stdexcept>
#include "Arr.h"

using namespace std;


template <typename T>
Arr<T>::Arr()
{
    const int size=5;
    T *ArrayCopy=new T[size];
    for (int i = 0; i < size; i++) {
        ArrayCopy[i] = 0;
    }
    this->Array=ArrayCopy;
}


template <typename T>
Arr<T>::Arr(const T *Array,const int SizeArray)
{
    const int size=5;
        if (SizeArray<size)
            throw logic_error( "Массив слишком мал(");
        if (SizeArray>size)
            throw logic_error("Массив слишком большой");
    T *ArrayCopy=new T[size];
    for (int i = 0; i < size; i++)
    {
        ArrayCopy[i] = Array[i];
    }
    this->Array=ArrayCopy;
}


template <typename T>
Arr<T>::Arr(const Arr& other)
{
    const int size=5;
    T *ArrayCopy=new T[size];
    for (int i = 0; i < size; i++)
    {
        ArrayCopy[i] = other.Array[i];
    }
    //if (this->Array != nullptr) delete Array;
    this->Array=ArrayCopy;
}

template<typename T>
void Arr<T>::setArr(const T *Array,const int SizeArray)
{
    const int size=5;
    if (SizeArray<size)
        throw logic_error( "Массив слишком мал(");
    if (SizeArray>size)
        throw logic_error("Массив слишком большой");
    T ArrayCopy[size];
    for (int i = 0; i < size; i++)
    {
        ArrayCopy[i] = Array[i];
    }
    this->Array=ArrayCopy;
}

template<typename T>
void Arr<T>::print()
{
    int size=5;
    for (int i = 0; i < size; i++)
    {
        cout<<i+1<<"-ый элемент="<< this->Array[i]<< endl;
    }
}


template<typename T>
Arr<T> Arr<T>::operator =(const Arr& other)
{
    const int size = 5;
    if (this == &other)
        return *this;

    T *ArrayCopy=new T[size];
    for (int i = 0; i < size; i++)
    {
        ArrayCopy[i] = other.Array[i];
    }
   // if (this->Array != nullptr) delete this->Array;
    this->Array=ArrayCopy;
    return *this;
}
