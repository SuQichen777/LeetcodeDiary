#include <vector>
using namespace std;


class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int even_idx = 0, odd_idx = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                res[even_idx] = nums[i];
                even_idx += 2;
            } else {
                res[odd_idx] = nums[i];
                odd_idx += 2;
            }
        }
        return res;
        
        
    }
};