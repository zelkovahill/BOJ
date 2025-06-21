#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (double)arr[i] / max * 100;
    }

    cout << fixed;
    cout.precision(6);

    cout << sum / n;

    return 0;
}