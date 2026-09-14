/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int n=gain.size();
        vector<int>ans(n+1);  
        ans[0]=0;
        for(int i=0;i<n;i++)
        {
            ans[i+1]=ans[i]+gain[i];
        }
        int maxi=ans[0];
        for(int i=0;i<ans.size();i++)
        {
            maxi=max(ans[i],maxi);
        }
        return maxi;
    }
};
// @lc code=end

