#include <vector>
#include <iostream>
#include <set>
using namespace std;

//暴力解法
// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         for(size_t i = 0; i < nums.size(); i++){
//             for(size_t j = i+1; j < min(i + k + 1,nums.size()); j++){
//                 if (nums[i] == nums[j]){
//                     return true;
//                 }
//             }
//         }
//         return false;
        
//     }
// };

//k大小的滑动窗口
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //use set
        set<int> s;
        for(size_t i = 0; i < nums.size(); i++){
            if(i > k){
                s.erase(nums[i-k-1]);
            }
            if(!(s.insert(nums[i])).second){
                return true;
            }
        }
        return false;
    }
};