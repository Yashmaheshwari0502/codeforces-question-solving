#include<iostream>
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
#include <climits>
using namespace std;

int main()
{
    int t,n;
    cin>>n>>t;
    string s;
    cin>>s;
    int i=0;
    while(t--){
        for(int i=1;i<n;++i){
            if(s[i]=='G' && s[i-1]=='B'){
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }    
        cout<<s<<endl;
    return 0;
}
