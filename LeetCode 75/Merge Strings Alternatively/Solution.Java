class Solution {
    public String mergeAlternately(String word1, String word2) {
        String k="";
        int i=0;
        int la=word1.length();
        int lb=word2.length();
        while (i<la || i<lb){
            if (i<la){
                k=k+word1.charAt(i);
            }
            if (i<lb){
                k=k+word2.charAt(i);
            }
            i++;
        }
        return k;
    }
}
    
"""
Concept used: 
Two pointers: two inputs, exhaust both

Time Complexity:
O(n + m)

Space Complexity:
O(n + m)
"""
