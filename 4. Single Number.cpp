// 136. Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Bitwise XOR
        // XOR property: Same bits return 0, Diff buts return 1
        /*
            [2,2,1]
            2^2 = 0
            2^2^1 = 1 (Return 1)
            XOR all, only the single number would remain
        */

        int ans=0;
        for(int &n: nums){
            ans=ans^n;
        }
        return ans;

        // O(n) Time, O(1) Space
    }
};
