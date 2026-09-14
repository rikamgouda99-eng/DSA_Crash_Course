/*
Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:

Input: n = 1
Output: true
Explanation: 1 has no prime factors.
Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.
 

Constraints:

-231 <= n <= 231 - 1
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int count=0;
       
        for(int i=1;i<nums.size();i++)
        {
            if(nums[count]!=nums[i])
           {
                count++;
                nums[count]=nums[i];
            }
        }
       return count+1;
    }
};
// @lc code=end

