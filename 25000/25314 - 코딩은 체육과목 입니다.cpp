#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i += 4)
    {
        cout << "long ";
    }

    cout << "int";
    return 0;
}