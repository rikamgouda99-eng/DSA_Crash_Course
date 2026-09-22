/*
 * @lc app=leetcode id=704 lang=cppit
 * [704] Binary Search
    Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
 

Constraints:

1 <= nums.length <= 104
-104 < nums[i], target < 104
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int i=0;
        int j=nums.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target)
            i=mid+1;
            else j=mid-1;
        }
        return -1;   
    }
};
// @lc code=end

