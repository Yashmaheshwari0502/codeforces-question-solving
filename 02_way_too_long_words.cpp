#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s.length() <= 10)
        {
            cout << s << endl;
        }
        else
        {
            int n = 0;
            for (int i = 1; i < s.length() - 1; i++)
            {
                n++;
            }
            cout << s[0] << n << s[s.length() - 1] << endl;
        }
    }
    return 0;
}