//https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      unordered_map<int,int>y;
      vector<int>vec;
      for(auto it:nums){
          y[it]++;
      }  
      for(auto it:y){
          if(it.second>1){
              vec.push_back(it.first);
          }
      }
   return vec; }
};
