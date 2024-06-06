#给你一个整数数组 cost ，其中 cost[i] 是从楼梯第 i 个台阶向上爬需要支付的费用。一旦你支付此费用，即可选择向上爬一个或者两个台阶。
#你可以选择从下标为 0 或下标为 1 的台阶开始爬楼梯。
#请你计算并返回达到楼梯顶部的最低花费。

class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        dp = [0]*len(cost)
        for i in range(len(cost)):
            if i == 0 or i == 1:
                dp[i] = cost[i]
            else:
                dp[i] = min(dp[i-1],dp[i-2])+cost[i]
        return min(dp[-1],dp[-2])
        
