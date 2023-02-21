#include "myString.h"
#include <iostream>

using namespace std;

myString::myString()
{
  str = nullptr;
  lenght = 0;
}

myString::myString(const char* str)
{
  lenght = strlen(str);
  this->str = new char[lenght + 1];
  for (int i = 0; i < lenght; i++)
  {
    this->str[i] = str[i];
  }
  this->str[lenght] = '\0';
}

myString::myString(const myString& other)
{
  lenght = strlen(other.str);
  this->str = new char[lenght + 1];
  for (int i = 0; i < lenght; i++)
  {
    this->str[i] = other.str[i];
  }
  this->str[lenght] = '\0';
}

myString::~myString()
{
  delete[] this->str;
}

myString& myString::operator=(const myString& other)
{
  if ((this->str != nullptr) && (this->str != other.str))
  {
    delete[] this->str;
  }
  lenght = strlen(other.str);
  this->str = new char[lenght + 1];
  for (int i = 0; i < lenght; i++)
  {
    this->str[i] = other.str[i];
  }
  this->str[lenght] = '\0';
  return *this;
}

void myString::Find(const char ch, int start)
{
  lenght = strlen(str);
  int counter = 0;
  int index = -1;
  for (; start < lenght; start++)
  {
    if ((str[start] == ch) && (counter == 0))
    {
      index = start;
      counter = counter + 1;
    }
  }
  if (index != -1)
    cout << "Номер элемента=  " << index << endl;
  else
    cout << "Такого элемента с этого места нет" << endl;
}

void myString::FindLast(const char ch)
{
  lenght = strlen(str);
  int counter = 0;
  int index = 0;

  for (lenght; lenght >= 0; lenght--)
  {
    if ((str[lenght] == ch) && (counter == 0))
    {
      index = lenght;
      counter = counter + 1;
    }
  }
  if (index != -1)
    cout << "Номер элемента= " << index << endl;
  else
    cout << "Такого элемента в этой нет" << endl;

}

myString myString::Substr(int index, int count)
{
  lenght = strlen(str);
  myString newstr;
  newstr.str = new char[count + 1];
  int i = 0;
  int chek = 0;
  while (chek == 0)
  {
    if (index + count > lenght)
    {
      cout << "Ай-яй-яй\n" << "Давай по новой меcто, и сколько надо " << endl;
      cin >> index >> count;
    }
    if (index + count <= lenght)
    {
      chek = 1;
    }
  }
  int index2 = index;
  for (index; index < index2 + count; index++)
  {
    newstr.str[i] = this->str[index];
    i++;
  }
  newstr.str[i] = '\0';
  cout << "Подстрока\t" << newstr.str << endl;
  return newstr.str;

}

void myString::Remove(int index, int count)
{
  int lenght = strlen(str);
  int chek = 0;
  while (chek == 0)
  {
    if (index + count > lenght)
    {
      cout << "Ай-яй-яй\n" << "Давай по новой меcто, и сколько надо " << endl;
      cin >> index >> count;
    }
    if (index + count <= lenght)
    {
      chek = 1;
    }
  }
  char* buff = new char[lenght - count + 1];
  int i = 0, k = 0;
  while (i != index)
  {
    buff[i] = str[k];
    i++; k++;
  }
  k = k + count;
  for (k; k < lenght; k++)
  {
    buff[i] = str[k];
    i++;
  }
  buff[lenght - count] = '\0';
  delete[] str;
  str = buff;

}

void myString::Insert(char* s, int index)
{
  int lenght = strlen(str);
  int lenght2 = strlen(s);
  int chek = 0;
  while (chek == 0)
  {
    if (index > lenght )
    {
      cout << "Ай-яй-яй\n" << "Давай по новой меcто" << endl;
      cin >> index;
    }
    if (index <= lenght)
    {
      chek = 1;
    }
  }
  char* buff = new char[lenght + lenght2+ 1];
  int i = 0, j = 0, k = 0;
  for (i; i < index; i++) 
  {
    buff[i] = str[k];
    k++;
  }
  for (j; j < lenght2; j++) 
  {
    buff[i] = s[j];
    i++;
  }
  for (i; i <= lenght2 + lenght; i++) 
  {
    buff[i] = str[k];
    k++;
  }
  delete[] str;
  str = buff;
}

void myString::Lenght()
{
  cout << "Длина строки равна  =  " << lenght << endl;
}

void myString::Printf()
{
  cout << str << endl;
}
