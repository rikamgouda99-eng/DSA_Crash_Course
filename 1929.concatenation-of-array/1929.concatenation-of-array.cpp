/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
         int j=0;
        for(int i=n;i<n*2;i++)
        {
            ans.push_back(nums[j]);
            j++;
        }
        return ans;
    }
};
// @lc code=end

