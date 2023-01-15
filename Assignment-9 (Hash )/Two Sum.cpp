//https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create an unordered map to store the elements and their indices
        unordered_map<int, int> map;
        // Iterate through the input array
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // the value that we need to find in the array
            // Check if the complement exists in the map
            if(map.count(complement) > 0) {
                // If it exists, return the indices of the complement and the current element
                return {map[complement], i};
            }
            // If it doesn't exist, add the current element and its index to the map
            map[nums[i]] = i;
        }
        return {};
    }
};
