/*
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        if(nums[0]>target) return 0;
     for(int i=0;i<nums.size();i++)
     {
        if(nums[i]>target) 
        {
            return i;
        }
        if(nums[i]==target) return i;
        
     }   
     return nums.size();
    }
};
// @lc code=end

