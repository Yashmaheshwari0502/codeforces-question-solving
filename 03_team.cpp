#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        bool a, b, c;
        cin >> a>> b>> c;
        if ((a && b) == 1 || (a && c) == 1 || (b && c) == 1)
        {
            count++;
        }
    }
    cout << count<<endl;
    return 0;
}