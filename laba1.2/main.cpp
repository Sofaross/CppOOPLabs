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
  cout << "Присвоим второму слову, первое(str = str2)" << endl;
  str = str2;
  str.Printf();

  cout << "==================" << endl;
  cout << "Введите  в  начале букву, которою хотите найти, а потом место с которо надо начать поиск" << endl;
  char zic;
  cin >> zic;
  int a;
  cin >> a;
  str2.Find(zic, a);
  cout << "==================" << endl;
  cout << "Введите букву, которою хотите найти с конца слова" << endl;
  cin >> zic;
  str2.FindLast(zic);
  cout << "==================" << endl;
  cout << "Введите  в  начале место, с которого хотите найти подстроку, а потом сколько символов вы хотите взять" << endl;
  int b;
  cin >> a >> b;
  str2.Substr(a, b);
  cout << "==================" << endl;
  cout << "Введите  в  начале место, с которого хотите удалить слова, а потом сколько символов вы хотите удалить" << endl;
  cin >> a >> b;
  str2.Remove(a, b);
  cout << "Новая строка =====" << endl;
  str2.Printf();


  cout << "Введите кол-во элементов строки, которую нужно вставить\n";
  int size;
  cin >> size;
  char* s = new char[size];
  cout << "Введите элементы\n";
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
  cout << "Номер элемента, с которого нужно вставить новое слово\n";
  cin >> a;
  str2.Insert(s, a);
  str2.Printf();

  system("pause");
  return 0;


}
