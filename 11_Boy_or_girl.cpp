#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a' ]++;
    }
    string ans = "";
    for (int i = 0; i <26; i++)
    {
        if (arr[i] >0)
        {
            ans.push_back(i + 'a');
        }
       
    }

    if (ans.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
