//https://leetcode.com/problems/guess-number-higher-or-lower/description/

class Solution {
public:
    int guessNumber(int n) {
        int low=1,high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            int m=guess(mid);
            if(m==0){
                return mid;
            }
            else if(m==-1){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};
