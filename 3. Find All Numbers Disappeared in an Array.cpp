// 448. Find All Numbers Disappeared in an Array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Using set
        unordered_set<int> st;
        vector<int> ans;
        for(int &n: nums){
            st.insert(n);
        }

        for(int n=1;n<=nums.size();n++){
            if(st.count(n)==0)
                ans.push_back(n);
        }

        return ans;

      // O(n) Time, O(n) Space
      /* Another solution: 
          1. Consider elements in nums as indices
          2. Mark elements at those indices as negative
          3. All that remain positive are missing, add them to ans
      */
    }
};
