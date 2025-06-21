#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[9];

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int maxIdx = 1;

    for (int i = 1; i < 9; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIdx = i + 1;
        }
    }

    cout << max << '\n'
         << maxIdx << '\n';

    return 0;
}