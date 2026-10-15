/*
Example 1:

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
Example 2:

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false

 */

// @lc code=start

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target)
                return true;

            if (nums[l] == nums[mid] && nums[mid] == nums[r]) {
                l++;
                r--;
                continue;
            }

            if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            else {
                if (nums[mid] < target && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }

        return false;
    }
};
// @lc code=end

