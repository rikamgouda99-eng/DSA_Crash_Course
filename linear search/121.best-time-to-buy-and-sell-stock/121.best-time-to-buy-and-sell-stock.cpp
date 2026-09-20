/*
  @lc app=leetcode id=121 lang=cpp
  [121] Best Time to Buy and Sell Stock
 Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit=0;
        int mini=INT_MAX;
       for(int i=0;i<prices.size();i++)
       {
        if(prices[i]<mini)
        {
            mini=prices[i];
        }
        else if(prices[i]-mini>profit)
        profit=prices[i]-mini;
       }
       return profit;
    }
};
// @lc code=start
// @lc code=end

