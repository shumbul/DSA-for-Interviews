// 287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        vector<int> arr(mx+1,0);
        for(int i=0;i<nums.size();i++){
            if(arr[nums[i]])
                return nums[i];
            arr[nums[i]]=1;
        }
        return -1;
        // O(n) Time, O(max_element <= 10^5) Space
    }
};
