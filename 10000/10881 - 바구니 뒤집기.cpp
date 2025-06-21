#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int m;

    int arr[101] = {0};

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int index = 0; index < m; index++)
    {
        int i;
        int j;

        cin >> i >> j;

        while (i < j)
        {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
            i++;
            j--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}