
#include <vector>
#include <algorithm>
using namespace std;


class Solution {

public:

    void dfs(vector<int>& nums, vector<vector<int>>& res, vector<int>& path, vector<bool>& used) {
        // 递归终止条件
        if (path.size() == nums.size()) {
            res.push_back(path);
            return;
        }

        // 遍历选择列表
        for (int i = 0; i < nums.size(); i++) {
            // 剪枝
            if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])) {
                continue;
            } else 
            {
                // 做选择
                path.push_back(nums[i]);
                used[i] = true;

                // 递归
                dfs(nums, res, path, used);

                // 撤销选择
                path.pop_back();
                used[i] = false;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        vector<bool> used(nums.size(), false);
        // 排序
        sort(nums.begin(), nums.end());
        dfs(nums, res, path, used);
        return res;
        
    }
};