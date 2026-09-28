## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the minimum stock price seen so far. For every later price, I calculate the possible profit and keep the maximum profit found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The buying day must come before the selling day. If the prices continuously decrease, the maximum profit is 0.