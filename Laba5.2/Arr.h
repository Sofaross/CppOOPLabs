#ifndef LAB2_5_CONE_H
#define LAB2_5_CONE_H


template<typename T>
class Arr
{
private:
    T *Array;

public:
    Arr();
    Arr(const T * Array,const int SizeArray);
    Arr(const Arr& other);
    ~Arr() = default;
    void setArr(const T *Array,const int SizeArray);
    void print();
    //Arr operator[](const size_t index);
   // const Arr operator [](const size_t index) const;
    Arr operator=(const Arr& other);

};

#include "Arr.inl"
#endif