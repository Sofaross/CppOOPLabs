#include <iostream>
#include <string>
#include "CTwo.h"
#include "COne.h"
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << "====LABA2===" << endl;

    COne one_1;
    one_1.print();
    cout << "============" << endl;
    CTwo two_1;
    two_1.print();
    cout << "============" << endl;

    float chisl1 = 3.14;
    char* buff1 = new char[100];
    char buff13[]{"Тип char"};
    int i;
    for (i=0;i<strlen(buff13);i++) buff1[i]=buff13[i];
    buff1[i]='\0';
    string str = "Тип string";
    COne one_2(chisl1, buff1);
    one_2.print();
    cout << "============" << endl;
    CTwo two_2(str, &one_2);
    two_2.print();
    cout << "============" << endl;


    cout << "getF  =" << one_2.getF() << endl;
    cout << "setF  =5.2322" << endl;
    one_2.setF(5.2322);
    cout << "getF  =" << one_2.getF() << endl;

    cout << "============" << endl;

    cout << "getPS =" << one_2.getPS() << endl;
    cout << "setPS =Привет чар" << endl;
    char* buff2 = new char[100];
    char buff23[]{"Привет чар"};
    i=0;
    for (i=0;i<strlen(buff23);i++) buff2[i]=buff23[i];
    buff2[i]='\0';
    one_2.setPS(buff2);
    cout << "getPS =" << one_2.getPS() << endl;


    cout << "============" << endl;
    cout << "Присвом one_2 = one_1" << endl;
    one_2 = one_1;
    one_2.print();
    cout << "============" << endl;

    COne one_3(42.22, buff2);

    cout << "getS =" << two_2.getS() << endl;
    cout << "setS =Привет строка " << endl;
    string str2 = "Привет строка";
    two_2.setS(str2);
    cout << "getS =" << two_2.getS() << endl;

    cout << "============" << endl;

    cout << "getP" << endl;
    two_2.setP(one_3);
    two_2.print();

    cout << "============" << endl;
    cout << "Присвом two_2 = two_1" << endl;
    two_2 = two_1;
    two_2.print();



    cout << endl;

}
