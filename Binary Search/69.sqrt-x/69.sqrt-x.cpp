/*
 * @lc app=leetcode id=69 lang=cpp
 Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) 
    {
        if(x<2) return x;
        int low=1,high=x;
        int ans=1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid<=x/mid)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

        return ans;
    }
};
// @lc code=end

