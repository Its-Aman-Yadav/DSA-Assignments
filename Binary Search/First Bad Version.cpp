//https://leetcode.com/problems/first-bad-version/description/

class Solution{
  public:
    int firstBadVersion(int n){
      long long l=1,h=n,ans;

      while(l<=h){
        long long m=(l+h)/2;
        if(isBadVersion(m)==true){
          h=m-1;
          ans=m;
        }

        else
            l=m+1;
      }

      return ans;
    }
};
