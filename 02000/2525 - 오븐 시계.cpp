#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    b += a * 60;
    b += c;

    a = b / 60;
    b = b % 60;

    if (a >= 24)
    {
        a -= 24;
    }

    cout << a << " " << b;

    return 0;
}