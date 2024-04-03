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
    int t, height;
    cin >> t >> height;
    int width=0;
    while(t--){
        int a;
        cin>>a;
        if(a>height){
            width=width+2;
        }
        else{
            width++;
        }
    }
    cout<<width<<endl;
    return 0;
}