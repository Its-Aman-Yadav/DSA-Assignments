//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            int p=i+j;
            if(p%k==0)
            count ++;
        }
    }
    cout<<count;
}
