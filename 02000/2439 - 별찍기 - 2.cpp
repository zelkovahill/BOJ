#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}