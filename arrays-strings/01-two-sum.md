## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a nested-loop approach to check every possible pair of numbers.
If the sum of two numbers is equal to the target, I return their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution returns the indices of the two numbers.
The duplicate-number case was tested using [3, 3] with target 6.