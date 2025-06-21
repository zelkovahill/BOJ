#include <iostream>
using namespace std;

void swap(char &i, char &j)
{
  i = i ^ j;
  j = i ^ j;
  i = i ^ j;
}

int main()
{
  string a;
  string b;

  cin >> a >> b;

  swap(a[0], a[2]);
  swap(b[0], b[2]);

  int aNum = stoi(a);
  int bNum = stoi(b);

  int result = aNum > bNum ? aNum : bNum;

  cout << result;

  return 0;
}