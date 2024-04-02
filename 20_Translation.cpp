#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <numeric>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int i = 0;
    int n = s.size() - 1;
    int j= n;
    bool value = true;
    while (i<=n)
    {
        if (s[i] != t[j])
        {
            value = false;
        }
        i++;
        j--;
    }

    if (value)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}