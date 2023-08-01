#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mid;
    void binaryIssue(vector<int> nums, int l, int r, int t)
    {
        if (l > r)
        {
            mid = -1;
            return;
        }
        mid = (l + r) / 2;

        if (nums[mid] == t)
            return;

        if (nums[mid] > t)
            binaryIssue(nums, l, mid - 1, t);
        else if (nums[mid] < t)
            binaryIssue(nums, mid + 1, r, t);
    }

    int search(vector<int> &nums, int target)
    {
        binaryIssue(nums, 0, nums.size() - 1, target);

        return mid;
    }
};

int main()
{

    return 0;
}