#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool arr[31] = {0};

    for (int i = 0; i < 28; i++)
    {
        int n;
        cin >> n;

        arr[n] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (!arr[i])
        {
            cout << i << '\n';
        }
    }

    return 0;
}