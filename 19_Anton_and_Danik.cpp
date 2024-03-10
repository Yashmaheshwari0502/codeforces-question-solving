#include <iostream>
using namespace std;

int main()
{
    string s;
    int t;
    cin >> t >> s;
    int a = 0, d = 0;
    int i = 0;
    while (i < t)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
        i++;
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}