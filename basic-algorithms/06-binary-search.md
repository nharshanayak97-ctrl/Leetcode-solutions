## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I use two pointers, left and right, to represent the current search range. I check the middle element and eliminate half of the search space depending on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted.