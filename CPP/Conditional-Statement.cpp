#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int a;
    cin>>a;
    string list[10] = {"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    
    if (a>9)
      cout<<list[0];
    else
      cout<<list[a];
      
    return 0;
}

