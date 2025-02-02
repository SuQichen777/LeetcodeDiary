#include <vector>
using namespace std;


class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int vertical = 0;
        int horizontal = 0;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i][0] < m) {
                m = ops[i][0];
            }
            if (ops[i][1] < n) {
                n = ops[i][1];
            }
        }
        return m * n;
    }
};