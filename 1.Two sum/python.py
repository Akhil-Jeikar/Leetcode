class Solution(object):
    def twoSum(self, nums, target):

        #Brute-Force approach
        """
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j]==target:
                    return [i,j]
               """
        #Hash Table
        h={}
        for index,num in enumerate(nums):
            v=target-num
            if v in h:
                return [h[v],index]
            h[num]=index
        return []
        