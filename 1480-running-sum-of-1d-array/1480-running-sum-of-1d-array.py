class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        running_sum=0
        result=[]
        for num in range(0,len(nums)):
            running_sum+=nums[num]
            result.append(running_sum)
        return result
            