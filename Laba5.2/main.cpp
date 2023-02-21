#include <iostream>
#include "Arr.h"
#include <windows.h>
using namespace std;


int main()
{
    const int size=5;
    SetConsoleOutputCP(CP_UTF8);
    Arr<int> Arr_0;
    cout<<"Arr_0"<<endl;
    Arr_0.print();

    cout<<"=========="<<endl;

    int  barr[] = {13, 42, 67, 1};
    cout<<"Размер массива="<<sizeof(barr)/sizeof(barr[0])<<endl;
    cout<<"Arr_1"<<endl;
    try {
        Arr<int> Arr_1(barr, sizeof(barr)/sizeof(barr[0]));
        Arr_1.print();
    }
    catch (const exception &ex) {
        cout<<"ERROR!  =  "<<ex.what()<<endl;
    }
    int  iarr[size] = {13, 42, 67, 1, 228};
    Arr<int> Arr_2(iarr,sizeof(iarr)/sizeof(iarr[0]));

    cout<<"========="<<endl;
    cout<<"Размер массива="<<sizeof(iarr)/sizeof(iarr[0])<<endl;
    cout<<"Arr_2"<<endl;
    Arr_2.print();

    cout<<"==========="<<endl;
    int  darr[size] = {1, 13, 1, 21, 11};
    cout<<"SetArr_ForArr_2(1,13,1,21,11)"<<endl;
    Arr_2.setArr(darr,sizeof(darr)/sizeof(darr[0]));
    Arr_2.print();

    cout<<"========="<<endl;
    int  carr[size] = {1, 1, 1, 1, 1};
    cout<<"Размер массива="<<sizeof(carr)/sizeof(carr[0])<<endl;
    cout<<"Arr_3"<<endl;
    Arr<int> Arr_3(carr,sizeof(carr)/sizeof(carr[0]));
    Arr_3.print();
    cout<<"========="<<endl;
    cout<<"Arr_2=Arr_3"<<endl;
    Arr_2=Arr_3;
    Arr_2.print();

    system("pause");
    return 0;
}