// 1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // store element and idx pair
        for(int i=0;i<nums.size();i++) {
            int num = nums[i];
            if(mp.count(target - num)){
                return {mp[target-num], i};
            }
            mp[num]=i;
        }
        return {};
        // O(n) Time, O(n) Space
    }
};
