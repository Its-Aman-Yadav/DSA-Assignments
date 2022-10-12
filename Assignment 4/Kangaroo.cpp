//https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, v1, x2, v2;
    cin>>x1>>v1>>x2>>v2;
    if (v1>v2&&(x2-x1)%(v1-v2)==0)
    {
        cout<<"YES";
    }
    else {
    cout<<"NO";
    }
}
