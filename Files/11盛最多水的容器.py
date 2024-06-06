#给定一个长度为 n 的整数数组 height 。有 n 条垂线，第 i 条线的两个端点是 (i, 0) 和 (i, height[i]) 。
#找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
#返回容器可以储存的最大水量。

#暴力解法 会超出时间限制
class Solution_1(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        max = 0
        for i in range(len(height)):
            for j in range(i+1,len(height)):
                temp = (j-i)*min(height[i],height[j])
                if temp > max:
                    max = temp
        return max
    
#双指针
class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left = 0
        right = len(height)-1
        max = 0
        while left < right:
            temp = (right-left)*min(height[left],height[right])
            if temp > max:
                max = temp
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return max