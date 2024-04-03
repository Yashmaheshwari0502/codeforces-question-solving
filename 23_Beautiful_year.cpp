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
    int year;
    cin >> year;
    while (true)
    {
        year=year+1;
        int a = year / 1000;
        int b = year / 100%10;
        int c = year / 10%10;
        int d = year % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << year << endl;
    return 0;
}