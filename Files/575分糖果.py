#遍历
class Solution_1(object):
    def distributeCandies(self, candyType):
        """
        :type candyType: List[int]
        :rtype: int
        """
        D = {}
        n = len(candyType)
        can_eat = n/2
        eaten_candies = []
        eaten_num = 0
        for i in candyType:
            if can_eat == 0:
                break
            if i not in eaten_candies:
                eaten_candies.append(i)
                eaten_num+=1
                can_eat-=1
        return eaten_num
    
#数学思维解决
class Solution(object):
    def distributeCandies(self, candyType):
        """
        :type candyType: List[int]
        :rtype: int
        """
        #每种只留一个
        can_eat = len(candyType)/2
        S = set(candyType)
        type_num = len(S)
        return min(can_eat,type_num)
