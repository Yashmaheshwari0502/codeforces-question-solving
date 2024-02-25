#include <iostream>
using namespace std;

int main()
{
    int arr[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int col = 0;
    int row = 0;
    int count = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (arr[i][j] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
    }

    while (col != 3 || row != 3)
    {
        if (row < 3)
        {
            row++;
            count++;
        }
        if (row > 3)
        {
            row--;
            count++;
        }

        if (col < 3)
        {
            col++;
            count++;
        }
        if (col > 3)
        {
            col--;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}