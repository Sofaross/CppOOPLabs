#include "CTwo.h"
#include <string>
#include <iostream>

using namespace std;

CTwo::CTwo()
{
    this->s = "Строка по умолчанию";
    this->p = new COne;
}

CTwo::CTwo(string s, COne* in_p)
{
    this->s = s;
    p = new COne();
    *this->p = *in_p;
}
CTwo::CTwo(const CTwo& other)
{
    this->s = other.s;
    p = new COne();
    *this->p = *other.p;
}

CTwo::~CTwo()
{
    delete p;
}

string CTwo::getS()
{
    return s;
}
void CTwo::setS(string s)
{
    this->s = s;
}
COne CTwo::getP()
{
    return *p;
}
void CTwo::setP(COne in_p)
{
    *p = in_p;
}

void CTwo::print()
{
    cout << "Класс =CTwo\n";
    cout << "S     =" << this->s << endl;
    p->print();
}

CTwo& CTwo::operator= (const CTwo& other)
{
    if (this == &other)
    {
        return *this;
    }
    *p = *other.p;
    s = other.s;
    return *this;
}


