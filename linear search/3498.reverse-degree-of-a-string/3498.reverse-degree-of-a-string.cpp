/*
 * @lc app=leetcode id=3498 lang=cpp
 * [3498] Reverse Degree of a String
Input: s = "abc"

Output: 148

Explanation:

Letter	Index in Reversed Alphabet	Index in String	Product
'a'	26	1	26
'b'	25	2	50
'c'	24	3	72
The reversed degree is 26 + 50 + 72 = 148.

Example 2:

Input: s = "zaza"

Output: 160

Explanation:

Letter	Index in Reversed Alphabet	Index in String	Product
'z'	1	1	1
'a'	26	2	52
'z'	1	3	3
'a'	26	4	104
The reverse degree is 1 + 52 + 3 + 104 = 160.
 */

// @lc code=start
class Solution {
public:
    int reverseDegree(string s) 
    {
        int ans=0;
     for(int i=0;i<s.length();i++)
     {
        int k=(123-s[i]);
        ans=ans+(k*(i+1));
     }   
     return ans;
    }
};
// @lc code=end

