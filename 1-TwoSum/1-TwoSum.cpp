// Last updated: 6/3/2025, 6:36:23 PM
class Solution {
public:
    /*
    ====================================
    ============  O(N^2) ===============
    ====================================
    */
    /*
    ====================================
    ============  O(N) ===============
    ====================================
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (um.find(complement) != um.end()) {
                return {um[complement], i};
            }
            um[nums[i]] = i;
        }

        return {};
    }

};