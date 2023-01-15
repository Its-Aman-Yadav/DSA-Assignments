//https://leetcode.com/problems/sum-of-unique-elements/description/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        int sum=0;
        for(int i=0; i<nums.size(); i++){
           if(m[nums[i]]<=1){
             sum += nums[i];
           }
        }

      return sum;
    }
};
