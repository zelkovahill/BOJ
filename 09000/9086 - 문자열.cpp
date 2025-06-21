#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    string str;
    cin >> str;

    int length = str.length();

    cout << str[0] << str[length - 1] << "\n";
  }

  return 0;
}