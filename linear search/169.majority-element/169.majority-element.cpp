/*
 * @lc app=leetcode id=169 lang=cpp
 * [169] Majority Element
 Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

Input: nums = [-1,-1,2,-3]
Output: -1
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
      int freq=0;
      int ans=0;
      for(int i=0;i<nums.size();i++)
      {
        if(freq==0)
            ans=nums[i];
        if(ans==nums[i])
            freq++;
        else freq--;
      }
      
       return ans;
    }
};
// @lc code=end

