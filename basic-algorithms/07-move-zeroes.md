## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I use an index to place every non-zero element at the next available position. After all non-zero elements are placed, the remaining positions are filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The relative order of the non-zero elements must remain unchanged.