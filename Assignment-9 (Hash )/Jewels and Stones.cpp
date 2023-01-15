//https://leetcode.com/problems/jewels-and-stones/description/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> jw;
        int count = 0;

        for(auto &it : jewels)
        jw[it]++;

        for(auto &it : stones)
            if(jw[it]>0)
                count++;
    
        return count;
    }
};
