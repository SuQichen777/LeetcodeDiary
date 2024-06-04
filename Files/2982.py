class Solution(object):
    def maximumLength(self,s):
        """
        :type s: str
        :rtype: int
        """
        D = {}
        total_length = len(s)

        p2 = 0
        for p1 in range(total_length):
            cur_start = s[p1]
            p2 = p1+1
            while p2 <= total_length and s[p2-1] == cur_start:
                current_sub_string = s[p1:p2]
                D[current_sub_string] = D.get(current_sub_string,0)+1
                p2 += 1
        maxi_length = -1
        for sub_strings,occu in D.items():
            if occu >= 3:
                cur_length = len(sub_strings)
                if cur_length > maxi_length:
                    maxi_length = cur_length

        return maxi_length
