#include <vector>
using namespace std;


class Solution {
public:

    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& path, int start) {
        res.push_back(path);
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }
            path.push_back(nums[i]);
            backtrack(nums, res, path, i + 1);
            path.pop_back();
        }
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        sort(nums.begin(), nums.end());
        backtrack(nums, res, path, 0);
        return res;
        
    }
};