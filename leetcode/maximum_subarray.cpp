// https://leetcode.com/problems/maximum-subarray/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sz = nums.size();
        int maxsum = INT_MIN;
        int cs = 0;
        for (int i = 0; i < sz; i++)
        {
            cs += nums[i];
            maxsum = max(cs, maxsum);
            if (cs < 0)
            {
                cs = 0;
            }
        }
        return maxsum;
    }
};