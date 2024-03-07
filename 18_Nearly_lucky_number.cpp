#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        int a = n % 10;
        if (a == 7 || a == 4)
        {
            ans++;
        }
        n = n / 10;
    }
    if (ans == 4 || ans == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}