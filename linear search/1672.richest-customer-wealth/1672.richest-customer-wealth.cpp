/*
 * @lc app=leetcode id=1672 lang=cpp
 * [1672] Richest Customer Wealth
Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
Example 2:

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.
Example 3:

Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
Output: 17
 

Constraints:

m == accounts.length
n == accounts[i].length
1 <= m, n <= 50
1 <= accounts[i][j] <= 100
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int m = accounts.size();
        int n = accounts[0].size();
        int maxi=0;
        for(int i=0;i<m;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=accounts[i][j];
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};
// @lc code=end

