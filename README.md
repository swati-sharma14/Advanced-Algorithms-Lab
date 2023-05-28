## D. Sloppy Shuffles 2

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  
**Input:** standard input  
**Output:** standard output

This is Part 2 of the problem. The output format and input constraints are different for both problems. It is advised to treat the two as different problems.

Given two binary strings A and B, A is a sloppy shuffle of B (equivalently, B is a sloppy shuffle of A) if and only if at least one of the following is true:

1. A is equal to B.
2. A can be partitioned into binary strings A1, A2 of equal length, B can be partitioned into binary strings B1, B2 of equal length, and at least one of the following is true:
   - A1 is a sloppy shuffle of B1 and A2 is a sloppy shuffle of B2.
   - A1 is a sloppy shuffle of B2 and A2 is a sloppy shuffle of B1.

Determine if A is a sloppy shuffle of B.

### Input
The first line contains a single integer T (1≤T≤100), the number of test cases.

For each test case:
- The first line is a single integer n (1≤n≤2×105), the length of strings A and B.
- The second line contains the string A.
- The third line contains the string B.

Strings A and B consist of the characters "0" and "1" only.

The sum of n over all test cases does not exceed 2×105.

### Output
Print "YES" if A is a sloppy shuffle of B, and "NO" otherwise.

The output is case-insensitive. "Yes", "yeS", "YeS" are all acceptable outputs.

### Example

**Input:**
3
4
1101
0111
8
10100110
10011110
7
0001101
1110010


**Output:**
YES
NO
NO
