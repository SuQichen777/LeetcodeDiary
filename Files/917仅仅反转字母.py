#给你一个字符串 s ，根据下述规则反转字符串：

#所有非英文字母保留在原有位置。
#所有英文字母（小写或大写）位置反转。
#返回反转后的 s 。

class Solution(object):
    def reverseOnlyLetters(self, s):
        """
        :type s: str
        :rtype: str
        """
        s = list(s)
        left = 0
        right = len(s)-1
        while left < right:
            if not s[left].isalpha():
                left += 1
            elif not s[right].isalpha():
                right -= 1
            else:
                s[left],s[right] = s[right],s[left]
                left += 1
                right -= 1
        return "".join(s)
