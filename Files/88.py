class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        sorted_nums = []
        p1, p2 = 0, 0
        while p1<m and p2<n:
            if nums1[p1] < nums2[p2]:
                sorted_nums.append(nums1[p1])
                p1 += 1
            else:
                sorted_nums.append(nums2[p2])
                p2 += 1
        if p1 < m:
            sorted_nums.extend(nums1[p1:m])
        if p2 < n:
            sorted_nums.extend(nums2[p2:n])
        nums1[:m+n] = sorted_nums           

