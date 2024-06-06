#桌子上有 n 个球，每个球的颜色不是黑色，就是白色。

#给你一个长度为 n 、下标从 0 开始的二进制字符串 s，其中 1 和 0 分别代表黑色和白色的球。

#在每一步中，你可以选择两个相邻的球并交换它们。

#返回「将所有黑色球都移到右侧，所有白色球都移到左侧所需的 最小步数」。

class Solution(object):
    def minimumSteps(self, s):
        """
        :type s: str
        :rtype: int
        """
        pointer = 0
        L = list(s)
        count = 0
        while pointer < len(L):
            if L[pointer] == "1":
                pointer += 1
            else:
                count += 1
                pointer += 3
        return count

Solution().minimumSteps("1100001")