#include <iostream>
using namespace std;

int main()
{
    int h;
    int m;

    cin >> h >> m;

    m += h * 60;
    m -= 45;

    if (m < 0)
        m += 24 * 60;

    h = m / 60;
    m = m % 60;

    cout << h << " " << m;

    return 0;
}