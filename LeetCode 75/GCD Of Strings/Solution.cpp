#include <iostream>

using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
        {
            return "";
        }
        if (str1 == str2)
        {
            return str1;
        }

        else if (str1.length() > str2.length())
        {
            return gcdOfStrings(str1.substr(str2.length()), str2);
        }
        else
        {
            return gcdOfStrings(str1, str2.substr(str1.length()));
        }
    }
};

/*
Concept Used:
Euclidean algorithm

Time Complexity:
O(n + m)

Space Complexity:
O(n + m)
*/
