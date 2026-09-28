## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I use a stack to store opening brackets. Whenever a closing bracket is found, I compare it with the most recently inserted opening bracket. The string is valid only when all brackets are correctly matched and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

A stack is useful because brackets must be matched in reverse order of their opening sequence.