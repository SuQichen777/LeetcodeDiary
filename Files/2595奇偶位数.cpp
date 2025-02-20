
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> evenOddBit(int n)
    {
        vector<int> ans = {0, 0};
        int cur_state = 0; // even
        while (n != 0)
        {
            int last_dig = n & 1;
            n /= 2;
            if (last_dig == 1)
            {
                ans[cur_state % 2] += 1;
            }
            cur_state += 1;
        }
        return ans;
    }
};