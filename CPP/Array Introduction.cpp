#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) 
    cin>>a[i];
    for(int i=n-1;i>=0;i--) 
    cout<<a[i]<<" ";
    return 0;
}
