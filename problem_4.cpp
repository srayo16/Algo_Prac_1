#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int t = nums.size();

        int arr[t + 1];

        for (int i = 0; i < t; i++)
        {
            arr[i] = nums[i];
        }

        sort(arr, arr + t);
        int r;
        for (int i = 0; i < t; i++)
        {
            if (arr[i] != i)
            {
                r = i;
                break;
            }
        }

        return r;
    }
};

int main()
{

    return 0;
}