#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int l = 0;
        int r = s.length() - 1;

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        while (l < r)
        {
            if (vowels.count(s[l]) && vowels.count(s[r]))
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if (vowels.count(s[l]) && !vowels.count(s[r]))
            {
                r--;
            }
            else if (!vowels.count(s[l]) && vowels.count(s[r]))
            {
                l++;
            }
            else
            {
                l++;
                r--;
            }
        }
        return s;
    }
};

/*
Concept Used:
Two-pointer technique + HashSet for fast vowel lookup

Time Complexity:
O(n)

Space Complexity:
O(n)
 */