## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I first check whether both strings have the same length. Then I sort both strings and compare them. If the sorted strings are equal, the two strings are anagrams.

### Complexity

- Time: O(n log n)
- Space: O(1)

### Notes

An anagram must contain the same characters with the same frequencies. Sorting makes it easy to compare the character arrangement.