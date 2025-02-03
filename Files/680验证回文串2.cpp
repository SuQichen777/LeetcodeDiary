#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // 辅助函数：检查 s[left...right] 是否为回文
    bool isSubPalindrome(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                // 当发现不匹配时，尝试删除左边或右边的字符
                return isSubPalindrome(s, left + 1, right) || isSubPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};

