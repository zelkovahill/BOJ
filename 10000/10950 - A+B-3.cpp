#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a;
    int b;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}