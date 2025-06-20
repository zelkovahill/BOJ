#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    int sum = 0;

    if (a == b && a == c)
    {
        sum += 10000 + (a * 1000);
    }
    else if (a == b || a == c)
    {
        sum += 1000 + (a * 100);
    }
    else if (b == c)
    {
        sum += 1000 + (b * 100);
    }
    else
    {
        int max = a;

        if (b > max)
            max = b;

        if (c > max)
            max = c;

        sum += max * 100;
    }

    cout << sum;

    return 0;
}