#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int m;

    cin >> n >> m;

    int arr[101]{0};

    for (int index = 0; index < m; index++)
    {
        int i;
        int j;
        int k;

        cin >> i >> j >> k;

        for (int v = i; v <= j; v++)
        {
            arr[v] = k;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}