//https://leetcode.com/problems/number-of-good-pairs/description/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
            count += map[nums[i]] - 1;
        }
        return count;
    }
};
