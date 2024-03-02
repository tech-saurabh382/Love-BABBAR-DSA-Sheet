// LeetCode Problem
// 344. Reverse String -> https://leetcode.com/problems/reverse-string/description/

// Question Description

// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.

// ********** Solution **************

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        // Two Pointer Approach
        // T.C -> O(n)
        // S.C -> O(1)

        int start = 0;
        int end = s.size() - 1;
        while (start <= end)
        {
            swap(s[start], s[end]);
            start++, end--;
        }
    }
};