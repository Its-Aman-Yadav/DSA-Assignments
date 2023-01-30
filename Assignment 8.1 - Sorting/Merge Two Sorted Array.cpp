//https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i,j,current;
      
    for(int i=m;i<m+n;i++)
       nums1[i]=nums2[i-m];
      
    for(j=m;j<m+n;j++){
       int current=nums1[j];
       int k=j-1;
      
    while (k>=0 && nums1[k]>current){
    nums1[k+1]=nums1[k];
    k--;
     }
      
     nums1[k+1]=current;
     }
   }
};
