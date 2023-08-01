#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        int sizeIssue = nums.size();
        int arr[sizeIssue + 1];
        for (int i = 0; i < nums.size(); i++)
        {
            arr[i] = nums[i];
        }
        sort(arr, arr + nums.size());
        vector<int> v;

        for (int i = 0; i < nums.size(); i++)
        {

            if (arr[i] == target)
            {
                v.push_back(i);
            }
        }

        return v;
    }
};

int main()
{
    int t = 0;
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    Solution s1;
    s1.targetIndices(v, t);

    return 0;
}