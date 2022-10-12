/*https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size; cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
   int min=arr[0], max=arr[0];
   int max_count=0, min_count=0;
   for(int i=0; i<size; i++){
      if(arr[i]>max){
      max=arr[i];
      max_count++;
     }

      else if(arr[i]<min){
        min = arr[i];
        min_count++;
      }
   }
    
    
    
    cout<<max_count<<" "<<min_count;
}
