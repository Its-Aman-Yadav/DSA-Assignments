#include <iostream>
using namespace std;

void merge(int *,int, int , int );

void merge_sort(int *arr, int low, int end)
{
    int mid;
    if (low < end){
        //divide the array at mid and sort independently using merge sort
        mid=(low+end)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,end);
        //merge or conquer sorted arrays
        merge(arr,low,end,mid);
    }
}
// Merge sort 
void merge(int *arr, int low, int end, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= end) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}


int main()
{
    int myarray[] ={21,43,4,14,53,34,35,353,51};
    int num = sizeof(myarray)/sizeof(int);
    
    merge_sort(myarray, 0, num-1);
    cout<<"Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
    }
    
}
