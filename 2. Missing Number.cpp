// 268. Missing Number

class Solution {
    int sum_(int n){
        return (int)(n*ceil(n+1)/2);
    }
public:
    int missingNumber(vector<int>& nums) {
        return sum_(nums.size())-accumulate(nums.begin(), nums.end(),0);
    }
    // O(1) Time, O(1) Space
    // Basic maths 
};
