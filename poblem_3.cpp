#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int maxCount = 0;
        int minCount = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
                minCount++;
            else if (nums[i] > 0)
                maxCount++;
        }

        return maxCount > minCount ? maxCount : minCount;
    }
};

int main()
{

    return 0;
}