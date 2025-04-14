class Solution {
    public String reverseVowels(String s) {
        Set<Character> vowels=new HashSet<>(Arrays.asList('a','e','i','o','u','A','E','I','O','U'));

        int l=0;
        int r=s.length()-1;

        char[] arr=s.toCharArray();

        while(l<r){
            if (vowels.contains(arr[l]) && vowels.contains(arr[r])){
                char temp=arr[r];
                arr[r]=arr[l];
                arr[l]=temp;

                l++;
                r--;
            }
            else if (vowels.contains(arr[l]) && !vowels.contains(arr[r])){
                r--;
            }
            else if (!vowels.contains(arr[l]) && vowels.contains(arr[r])){
                l++;
            }
            else{
                l++;
                r--;
            }
        }
        return new String(arr);
    }
}

"""
Concept Used:
Two-pointer technique 

Time Complexity:
O(n)

Space Complexity:
O(n)
"""

