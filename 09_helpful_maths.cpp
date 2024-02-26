#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    if (size == 1)
    {
        cout << s << endl;
    }
    else{
        int i = 0;
    int arr[3] = {0};
    while (i <= size - 1)
    {
        if (s[i] == '1')
        {
            arr[0]++;
        }
        else if (s[i] == '2')
        {
            arr[1]++;
        }
        else
        {
            arr[2]++;
        }
        i += 2;
    }
    string ans = "";
    int j = 1;
    int sum = arr[0] + arr[1] + arr[2];
    while (arr[0]--)
    {
        ans.push_back('1');
        if (j < sum)
        {
            ans.push_back('+');
            j++;
        }
    }
    while (arr[1]--)
    {
        ans.push_back('2');
        if (j < sum)
        {
            ans.push_back('+');
            j++;
        }
    }

    while (arr[2]--)
    {
        ans.push_back('3');
        if (j < sum)
        {
            ans.push_back('+');
            j++;
        }
    }

    cout << ans << endl;
    }
    return 0;
}