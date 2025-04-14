#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> answer;
        int max = 0;
        for (int i : candies)
        {
            if (i > max)
            {
                max = i;
            }
        }

        for (int i : candies)
        {
            answer.push_back(i + extraCandies >= max);
        }
        return answer;
    }
};

/*
Concept Used:
Comparison with maximum element

Time Complexity:
O(n)

Space Complexity:
O(n)
*/