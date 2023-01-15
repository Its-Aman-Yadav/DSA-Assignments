//https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        set<int> st;
        for(int i =0;i<n;i++)st.insert(nums[i]);
        
        int ans =0;
         int product =1;
        for(int i =0;i<nums.size();i++){
           
            if(st.count(original)>0){
                original =original*2;
                
            }
            else{
                ans = original;
                break;
            }
        }
        return original;
        
    }
};
