/*https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size; cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<size; i++){
        
        if(arr[i]<38){
            arr[i] = arr[i];
        }
        else if(  (((arr[i]/5+1)*5)-arr[i])<3  )
          arr[i] = (arr[i]/5+1)*5;
       
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    
}
