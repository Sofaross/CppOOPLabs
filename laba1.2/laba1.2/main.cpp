#define _CRT_SECURITYCRITICAL_ATTRIBUTE
#include <iostream>
#include "myString.h"


using namespace std;
int main()
{
  setlocale(LC_ALL, "Rus");
  myString str("qwe");
  myString str2("zxcvbnxbvxc");
  str.Lenght();
  str.Printf();
  str2.Lenght();
  str2.Printf();
  cout << "==================" << endl;
  cout << "�������� ������� �����, ������(str = str2)" << endl;
  str = str2;
  str.Printf();

  cout << "==================" << endl;
  cout << "�������  �  ������ �����, ������� ������ �����, � ����� ����� � ������ ���� ������ �����" << endl;
  char zic;
  cin >> zic;
  int a;
  cin >> a;
  str2.Find(zic, a);
  cout << "==================" << endl;
  cout << "������� �����, ������� ������ ����� � ����� �����" << endl;
  cin >> zic;
  str2.FindLast(zic);
  cout << "==================" << endl;
  cout << "�������  �  ������ �����, � �������� ������ ����� ���������, � ����� ������� �������� �� ������ �����" << endl;
  int b;
  cin >> a >> b;
  str2.Substr(a, b);
  cout << "==================" << endl;
  cout << "�������  �  ������ �����, � �������� ������ ������� �����, � ����� ������� �������� �� ������ �������" << endl;
  cin >> a >> b;
  str2.Remove(a, b);
  cout << "����� ������ =====" << endl;
  str2.Printf();


  cout << "������� ���-�� ��������� ������, ������� ����� ��������\n";
  int size;
  cin >> size;
  char* s = new char[size];
  cout << "������� ��������\n";
  for (int i = 0; i < size; i++)
  {
    cin >> s[i];
  }
  s[size] = '\0';
  cout << "==================" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << s[i];
  }
  cout << endl;


  cout << "==================" << endl;
  cout << "����� ��������, � �������� ����� �������� ����� �����\n";
  cin >> a;
  str2.Insert(s, a);
  str2.Printf();

  system("pause");
  return 0;


}
