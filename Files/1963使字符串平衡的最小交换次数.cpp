
#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        int minSwaps(string s) {

            // 空字符串
            if (s.empty()) {
                return 0;
            }
            int left = 0;
            int res = 0;
            for (char c : s) {
                if (c == '[') {
                    left++;
                } else {
                    if (left > 0) {
                        left--;
                    } else {
                        res++;
                    }
                }
            }
            return (res + 1) / 2;
                

            
        }
    };

int main() {
    Solution s;
    cout << s.minSwaps("][][") << endl;
    return 0;
}