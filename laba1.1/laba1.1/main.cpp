#include <iostream>
#include <math.h>
#include "complex.h"
using namespace std;

void Step()
{
  cout << "=====================================" << endl << endl;
}



int main()
{
  setlocale(LC_ALL, "RUS");
  double x, y;

  cout << "Введите первое комплексное число" << endl;
  cin >> x >> y;
  Complex first_Number(x, y);

  cout << "Введите второе комплексное число" << endl;
  cin >> x >> y;
  Complex second_Number(x, y);

  cout << "\n==============let's go===============" << endl;
  cout << "Комплексное число";
  first_Number.Printf();
  Step();
  cout << "Комплексное число";
  second_Number.Printf();
  Step();

  bool resultEqual = first_Number.Equal(second_Number);
  if (resultEqual == 1)
  {
    cout << "Комплексные числа равны" << endl;
  }
  else
  {
    cout << "Комплексные числа не равны" << endl;
  }
  Step();

  Complex summa;
  summa = first_Number + second_Number;
  cout << "Сумма\t";
  summa.Printf();
  Step();

  Complex minus;
  minus = first_Number - second_Number;
  cout << "Разность ";
  minus.Printf();
  Step();

  Complex multiplication;
  multiplication = first_Number * second_Number;
  cout << "Умножение";
  multiplication.Printf();
  Step();

  Complex division;
  division = first_Number / second_Number;
  cout << "Деление ";
  division.Printf();
  Step();

  system("pause");
  return 0;
}