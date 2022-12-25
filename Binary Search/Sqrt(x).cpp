//https://leetcode.com/problems/sqrtx/description/

class Solution {
public:
    int mySqrt(int x) {
        long low=0, high=x, mid;
        long ans=0;
        while(low<=high){
            mid = low + (high-low)/2;
            long sqr = mid*mid;
            if(sqr==x){
                return mid;
            }

            else if(sqr<x){
              ans=mid;
              low=mid+1;
            }

            else{
               high=mid-1;
            }
               
        }
        return ans;
    }
};
