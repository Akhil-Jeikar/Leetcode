class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        final=[]
        i=0
        la,lb=len(word1),len(word2)

        while i<la or i<lb:
            if i<la:
                final.append(word1[i])
            if i<lb:
                final.append(word2[i])
            i+=1

        return "".join(final)
    
"""
Concept used: 
Two pointers: two inputs, exhaust both

Time Complexity:
O(n + m)

Space Complexity:
O(n + m)
"""

        

