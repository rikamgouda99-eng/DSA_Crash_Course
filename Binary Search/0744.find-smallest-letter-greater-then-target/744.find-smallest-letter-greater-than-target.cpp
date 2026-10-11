/*
 * @lc app=leetcode id=744 lang=cpp
 

Example 1:

Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
Example 2:

Input: letters = ["c","f","j"], target = "c"
Output: "f"
Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.
Example 3:

Input: letters = ["x","x","y","y"], target = "z"
Output: "x"
Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
     for(int i=0;i<letters.size();i++) 
     {
        if(target<letters[i]) return letters[i];
     }  
     return letters[0];
    }
};
// @lc code=end

