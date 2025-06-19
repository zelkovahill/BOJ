#include <iostream>
using namespace std;

int main()
{
  int a;
  int b;

  cin >> a >> b;

  int c = a * (b % 10);
  b /= 10;
  int d = a * (b % 10);
  b /= 10;
  int e = a * (b % 10);

  cout << c << "\n";
  cout << d << "\n";
  cout << e << "\n";
  cout << c + (d * 10) + (e * 100);

  return 0;
}