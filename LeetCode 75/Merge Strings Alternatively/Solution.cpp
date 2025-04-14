#include <string>
#include <iostream>

using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string k = "";
        int i = 0;
        int la = word1.length();
        int lb = word2.length();
        while (i < la || i < lb)
        {
            if (i < la)
            {
                k = k + word1[i];
            }
            if (i < lb)
            {
                k = k + word2[i];
            }
            i++;
        }
        return k;
    }
};

/*
Concept used:
Two pointers: two inputs, exhaust both

Time Complexity:
O(n + m)

Space Complexity:
O(n + m)
*/