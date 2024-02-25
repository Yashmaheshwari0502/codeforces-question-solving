// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, k;
//     int count = 0;
//     cin >> n >> k;
//     while (n>=k)
//     {
//         int p;
//         cin >> p;
//         if (p - k > 0)
//         {
            
//             count++;
//         }
//         n--;
//     }
//     cout << count << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}