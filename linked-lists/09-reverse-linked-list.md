## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I use three pointers: previous, current, and nextNode. For each node, I reverse its next pointer so that it points to the previous node. The process continues until all nodes are reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The original linked list is reversed in-place without creating another linked list. A single-node list remains unchanged.