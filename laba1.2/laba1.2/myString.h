#pragma once
class myString
{
public:

  myString();
  myString(const char* str);
  myString(const myString& other);
  ~myString();


  myString& operator =(const myString& other);
  void Find(const char ch, int start);
  void FindLast(const char ch);
  myString Substr(int index, int count);
  void Remove(int index, int count);
  void Insert(char* s, int index);
  void Lenght();
  void Printf();


private:
  char* str;
  int lenght;
};

