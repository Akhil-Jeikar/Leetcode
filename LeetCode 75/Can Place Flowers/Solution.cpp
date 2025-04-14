#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        vector<int> result;

        result.push_back(0);
        for (int i : flowerbed)
        {
            result.push_back(i);
        }
        result.push_back(0);

        for (int i = 1; i < result.size() - 1; i++)
        {
            if (result[i] == 0 && result[i - 1] == 0 && result[i + 1] == 0)
            {
                result[i] = 1;
                n--;
                if (n <= 0)
                {
                    return true;
                }
            }
        }
        return n <= 0;
    }
};

/*
Concept Used:
Greedy placement

Time Complexity:
O(n)

Space Complexity:
O(n)
*/