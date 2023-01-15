//https://leetcode.com/problems/kth-distinct-string-in-an-array/

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
           unordered_map<string, int> m;
           int i=0; 
           int n=0;
           while(i<arr.size()){
                string s = arr[i];
                m[s]++;               //taking freq of each word in the array
                i++;
           }

           for(int i=0; i<arr.size(); i++){
                string s = arr[i];
                if(m[s]==1){               //comparing whose freq is 1 i.e distinct element
                  n++;
                  if(n==k)                 //if element at kth pos return it
                    return s;
                }
           }

        return "";
    }
};
