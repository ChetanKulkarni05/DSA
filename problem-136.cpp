class Solution(object):
    def singleNumber(self, nums):
        ans = 0
        for index in nums:
            ans ^= index
        return ans
        