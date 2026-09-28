## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer technique to reverse the string in-place. One pointer starts from the beginning and another starts from the end, and their elements are swapped until they meet.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the input vector directly without using another array. For a single-character input, no swapping is required.