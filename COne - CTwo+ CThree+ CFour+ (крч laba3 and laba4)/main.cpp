#include <iostream>
#include <string>
#include "COne.h"
#include "CTwo.h"
#include "CThree.h"
#include "CFour.h"

using namespace std;

void printAll(CTwo* arr[], int n) 
{
  for (int i = 0; i < n; i++) 
  {
    cout << "Элемент массива номер= " << i+1 << endl;
    arr[i]->print();
    cout << "============" << endl;
  }
}


int main()
{
  setlocale(LC_ALL, "RUS");
  cout << "====LABA2===" << endl;

  COne one_1;
  one_1.print();
  cout << "============" << endl;
  CTwo two_1;
  two_1.print();
  cout << "============" << endl;

  float chisl1 = 3.14;
  char* buff1 = new char[] {"Тип char"};
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
  char* buff2 = new char[] {"Привет чар"};
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
  cout << "====LABA3===" << endl;

  CThree tree_1;
  tree_1.print();

  cout << "============" << endl;

  CThree tree_2(str2, &one_2,34);
  tree_2.print();

  cout << "============" << endl;

  cout << "getI =" << tree_2.getI() << endl;
  cout << "setI =1488" << endl;
  tree_2.setI(1488);
  cout << "getI =" << tree_2.getI() << endl;


  cout << endl;
  cout << "====LABA4===" << endl;

  CFour four_1;
  four_1.print();

  cout << "============" << endl;

  CFour four_2(str2, &one_1, 512, 9.98);
  four_2.print();

  cout << "============" << endl;

  cout << "getD =" << four_2.getD() << endl;
  cout << "setD =14.5997" << endl;
  double c = 14.5997;
  four_2.setD(c);
  cout << "getD =" << four_2.getD() << endl;

  cout << endl;
  cout << "====LABA5===" << endl;

  CTwo *arr[5];
  arr[0] = &two_1;
  arr[1] = &two_2;
  arr[2] = &tree_2;
  arr[3] = &four_1;
  arr[4] = &four_2;

  printAll(arr, 5);
    
  system("pause");
  return 0;
}