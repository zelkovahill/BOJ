#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int m;

    cin >> n >> m;

    int arr[101] = {0};

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int index = 1; index <= m; index++)
    {
        int i;
        int j;

        cin >> i >> j;

        if (i == j)
            continue;

        arr[i] = arr[i] ^ arr[j];
        arr[j] = arr[i] ^ arr[j];
        arr[i] = arr[i] ^ arr[j];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}