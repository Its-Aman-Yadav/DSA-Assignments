//https://leetcode.com/problems/arranging-coins/description/

class Solution {
public:
    int arrangeCoins(int n) {
        long lower=0, higher=n;

        while(lower<=higher){
            long mid = lower + (higher-lower)/2;

            if ((mid*(mid+1)/2) <= n ){
                lower = mid+1;
            }
        else
          higher = mid-1;
    }

    return lower-1;
    }
};
