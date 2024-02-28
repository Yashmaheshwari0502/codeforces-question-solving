#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";
    cin >> s;
    int i = 0;
    int count = 0;
    while (i < n-1)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}