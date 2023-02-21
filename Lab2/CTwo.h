#ifndef LAB2_4_CTWO_H
#define LAB2_4_CTWO_H
#include <string>
#include "COne.h"

using namespace std;

class CTwo {
private:
    string s;
    COne* p;
public:
    CTwo();
    CTwo(string s, COne* in_p);
    ~CTwo();
    CTwo(const CTwo& other);

    string getS();
    void setS(string s);

    COne getP();
    void setP(COne in_p);

    virtual void print();

    CTwo& operator=(const CTwo& other);
};


#endif
