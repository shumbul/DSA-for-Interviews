// 217. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Using hash
        unordered_set<int> set;
        for(int &n: nums){
            if(set.count(n)){
                return true;
            }
            set.insert(n);
        }
        return false;

        // O(n) time, O(n) space
    }
};
