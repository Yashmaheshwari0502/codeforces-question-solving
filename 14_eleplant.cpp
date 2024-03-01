#include <iostream>
using namespace std;

int main()
{
    long long int v;
    cin >> v;
    int count = 0;
    while (v != 0)
    {
        if (v >= 5)
        {
            v = v - 5;
            count++;
        }
        else if (v >= 4)
        {
            v = v - 4;
            count++;
        }
        else if (v >= 3)
        {
            v = v - 3;
            count++;
        }
        else if (v >= 2)
        {
            v = v - 2;
            count++;
        }
        else if (v >= 1)
        {
            v = v - 1;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}