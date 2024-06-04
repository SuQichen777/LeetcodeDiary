#给你两个仅由小写英文字母组成的字符串 s 和 t 。
#现在需要通过向 s 末尾追加字符的方式使 t 变成 s 的一个 子序列 ，返回需要追加的最少字符数。
#子序列是一个可以由其他字符串删除部分（或不删除）字符但不改变剩下字符顺序得到的字符串。

#Solution1(时间复杂度很高过不了test case)
class Solution_1:
    def appendCharacters(self, s: str, t: str) -> int:

        def is_subsequence(a,b):

            if len(b) > len(a):
                return False
            
            if len(b) == len(a):
                if a==b:
                    return True
                return False
            
            pointer_a, pointer_b = 0,0
            while pointer_b < len(b):
                while a[pointer_a] != b[pointer_b]:
                    pointer_a += 1
                    if pointer_a == len(a):
                        return False
                pointer_b += 1
            return True

        if s == t:
            return 0
        pointer = len(t)
        while pointer >= 0:
            cur_sequence = t[:pointer]
            if is_subsequence(s,cur_sequence):
                break
            pointer -= 1
        return len(t)-len(cur_sequence)
    

#双指针遍历s一遍
class Solution(object):
    def appendCharacters(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: int
        """
        pointer_t = 0
        for pointer_s in range(len(s)):
            if s[pointer_s] == t[pointer_t]:
                pointer_t += 1
            if pointer_t == len(t):
                return 0
        return len(t)-pointer_t