#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10];

    bool isExist[42] = {0};
    int cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;

        int mod = num % 42;

        if (!isExist[mod])
        {
            isExist[mod] = 1;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}