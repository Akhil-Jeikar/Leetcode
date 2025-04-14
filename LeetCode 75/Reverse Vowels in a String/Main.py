class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        l=0
        r=len(s)-1
        v=['a','e','i','o','u','A','E','I','O','U']
        ss=list(s)
        while l<r:
            if ss[l] in v and ss[r] in v:
                ss[l],ss[r]=ss[r],ss[l]
                l+=1
                r-=1
            elif ss[l] in v and ss[r] not in v:
                r-=1
            elif ss[l] not in v and ss[r] in v:
                l+=1
            elif ss[l] not in v and ss[r] not in v:
                l+=1
                r-=1
        return ''.join(ss)
                
"""
Concept Used:
Two-pointer technique 

Time Complexity:
O(n)

Space Complexity:
O(n)
"""