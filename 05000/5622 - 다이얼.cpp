#include <iostream>
using namespace std;

int main()
{
  string str;
  cin >> str;

  int time = 0;

  for (int i = 0; i < str.length(); i++)
  {
    if ('A' <= str[i] && str[i] <= 'C')
    {
      time += 3;
      continue;
    }

    if ('D' <= str[i] && str[i] <= 'F')
    {
      time += 4;
      continue;
    }

    if ('G' <= str[i] && str[i] <= 'I')
    {
      time += 5;
      continue;
    }

    if ('J' <= str[i] && str[i] <= 'L')
    {
      time += 6;
      continue;
    }

    if ('M' <= str[i] && str[i] <= 'O')
    {
      time += 7;
      continue;
    }

    if ('P' <= str[i] && str[i] <= 'S')
    {
      time += 8;
      continue;
    }

    if ('T' <= str[i] && str[i] <= 'V')
    {
      time += 9;
      continue;
    }

    if ('W' <= str[i] && str[i] <= 'Z')
    {
      time += 10;
      continue;
    }
  }

  cout << time;

  return 0;
}