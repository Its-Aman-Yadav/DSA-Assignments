#include <bits/stdc++.h>
using namespace std;
 
//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
 
//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
    int l=A.size();
    vector<int>B(l+1);
    for (int i=0;i<l;i++)
    {
        int n=A[i];
        B[n]++;
    }
    int k=0;
    for (int i=0;i<B.size();i++)
    {
       while(B[i]!=0)
       {
           A[k]=i;
           B[i]--;
           k++;
       }
    }
	//write the code for count sort
}
 
int main() {
	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
 
	return 0;
}
