#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            vector<vector<int>> res;
            if(intervals.empty()) return res;
            // 按照区间的左端点进行排序
            sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
                return a[0] < b[0];
            });
            // l是左端点，r是右端点
            for (int i = 0; i < intervals.size(); i++) {
                int l = intervals[i][0], r = intervals[i][1];
                // 如果res为空，或者当前区间的左端点大于res中最后一个区间的右端点，说明没有重合，直接添加
                if(res.empty() || res.back()[1] < l){
                    res.push_back({l, r});
                }else{
                    // 有重合，修改res中最后一个区间的右端点
                    res.back()[1] = max(res.back()[1], r);
                }
            }
            return res;

        }
    };