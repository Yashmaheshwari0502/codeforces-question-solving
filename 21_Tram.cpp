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
    int t;

    cin >> t;
    int max = -1;
    int value = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        value = value - a;
        value = value + b;
        if (value > max)
        {
            max = value;
        }
    }
    cout << max;
    return 0;
}