class Solution(object):
    def findMissingAndRepeatedValues(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[int]
        """
        n = len(grid)
        n2 = n * n
        D = {}
        for i in range(1, n2 + 1):
            D[i] = 0
        for i in grid:
            for j in i:
                D[j] = D.get(j, 0) + 1
        missing = repeated = 0
        for i in D:
            if D[i] == 0:
                missing = i
            if D[i] == 2:
                repeated = i
        return [repeated, missing]