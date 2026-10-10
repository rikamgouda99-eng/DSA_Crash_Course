/*
 * @lc app=leetcode id=367 lang=cpp
Example 1:

Input: num = 16
Output: true
Explanation: We return true because 4 * 4 = 16 and 4 is an integer.
Example 2:

Input: num = 14
Output: false
Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(num<2)return true;
     int l=2,r=num/2;
     while(l<=r)
     {
        int mid=l+(r-l)/2;
        long long square = 1LL * mid * mid;
        if(square==num) return true;
        else if(square>num)
        {
            r=mid-1;
        }
        else l=mid+1;
     }
      return false;
    }
};
// @lc code=end

