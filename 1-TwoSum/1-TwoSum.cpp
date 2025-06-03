// Last updated: 6/2/2025, 11:04:07 PM
class Solution {
public:
    /*
    ====================================
    ============  O(N^2) ===============
    ====================================

    vector<int> twoSum(vector<int>& nums, int target)
    {
    vector<int> vec;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vec = {i,j};
                    break;
                }
            }
       }
       return vec;
    }
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