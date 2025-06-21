#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int firstNum = 1;
    int sum = 0;

    for (;;)
    {
        sum += firstNum;

        if (firstNum == n)
        {
            break;
        }

        firstNum++;
    }

    cout << sum;

    return 0;
}