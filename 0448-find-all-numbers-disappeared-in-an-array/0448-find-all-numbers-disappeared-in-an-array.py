class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        n = len(nums)
        op = []
        num_set = set(nums) 
        for num in range(1, n + 1):
            if num not in num_set:
                op.append(num)
        return op


        