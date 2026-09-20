/*
 * @lc app=leetcode id=217 lang=cpp
 * [217] Contains Duplicate
 Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true


 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int>set;
        for(int i=0;i<nums.size();i++)
        {
            if(set.find(nums[i])!=set.end())
            return true;
            set.insert(nums[i]);
        }
        return false;
    }
};
// @lc code=end

