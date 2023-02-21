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

  cout << "������� ������ ����������� �����" << endl;
  cin >> x >> y;
  Complex first_Number(x, y);

  cout << "������� ������ ����������� �����" << endl;
  cin >> x >> y;
  Complex second_Number(x, y);

  cout << "\n==============let's go===============" << endl;
  cout << "����������� �����";
  first_Number.Printf();
  Step();
  cout << "����������� �����";
  second_Number.Printf();
  Step();

  bool resultEqual = first_Number.Equal(second_Number);
  if (resultEqual == 1)
  {
    cout << "����������� ����� �����" << endl;
  }
  else
  {
    cout << "����������� ����� �� �����" << endl;
  }
  Step();

  Complex summa;
  summa = first_Number + second_Number;
  cout << "�����\t";
  summa.Printf();
  Step();

  Complex minus;
  minus = first_Number - second_Number;
  cout << "�������� ";
  minus.Printf();
  Step();

  Complex multiplication;
  multiplication = first_Number * second_Number;
  cout << "���������";
  multiplication.Printf();
  Step();

  Complex division;
  division = first_Number / second_Number;
  cout << "������� ";
  division.Printf();
  Step();

  system("pause");
  return 0;
}