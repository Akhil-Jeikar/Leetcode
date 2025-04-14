class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """

        new=[0]+flowerbed+[0]

        for i in range(1,len(new)-1):
            if new[i]==0 and new[i-1]==0 and new[i+1]==0:
                new[i]=1
                n-=1
        return n<=0
    
"""
Concept Used:
Greedy placement

Time Complexity:
O(n)

Space Complexity:
O(n)
"""