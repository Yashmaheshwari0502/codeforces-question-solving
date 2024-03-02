#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    ;
    int n = s.size();
    int countlower = 0, countupper = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            countlower++;
        }
        else
        {
            countupper++;
        }
    }

    if (countlower > countupper   || countlower==countupper)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
        cout << s << endl;
    }
    else if(countupper>countlower){
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
        cout << s << endl;
    }
    return 0;
}