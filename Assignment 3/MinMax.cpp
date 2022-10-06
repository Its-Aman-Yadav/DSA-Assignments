#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    for(int i=0; i<4; i++)
        cin>>arr[i];
        
    //for min sum
    int min=0;
    for(int i=0; i<4; i++){
        min += arr[i];
}
    //for max sum
    int max=0;
    for(int i=1; i<4; i++){
        max += arr[i];
    }
    
    cout<<min<<" "<<max;
    
}
