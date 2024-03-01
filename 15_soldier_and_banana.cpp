#include <iostream>
using namespace std;

int main()
{
    long long int cost, soldier, banana;
    cin >> cost >> soldier >> banana;
    long long int value = 0;
    for (int i = 1; i <= banana; i++)
    {
        value = value + (i * cost);
    }
    if (soldier > value)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << value - soldier << endl;
    }
    return 0;
}