// 704. Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target, int s = 0, int e = 10001) {
        if (e == 10001) e = nums.size() - 1; // Adjust upper limit correctly
        if (s > e) return -1; // Base case: invalid range

        int mid = s + (e - s) / 2;
        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] > target) {
            // Search left half
            return search(nums, target, s, mid - 1);
        } else {
            // Search right half
            return search(nums, target, mid + 1, e);
        }

        // O(logn) Time, O(1) Space
    }
};
