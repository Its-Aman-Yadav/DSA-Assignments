/*https://www.hackerrank.com/challenges/apple-and-orange?isFullScreen=true*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    long ar[m], arr[n];
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    for (int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    long s1=0;
    long c1=0;
    for (int i=0;i<m;i++)
    {
        s1=a+ar[i];
        if (s1>=s && s1<=t)
        {
            c1++;
        }
        s1=0;
    }
    long s2=0;
    long c2=0;
    for (int j=0;j<n;j++)
    {
        s2=b+arr[j];
        if (s2>=s && s2<=t)
        {
            c2++;
        }
        s2=0;
    }
    cout<<c1<<endl;
    cout<<c2<<endl;
}
