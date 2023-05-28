## Elegant Card Sequence

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  
**Input:** standard input  
**Output:** standard output

There are N cards arranged in a row. Each of these cards has a colour on both faces, where colours are denoted by positive integers. Cardi has the colors Ai and Bi on either of its side, respectively.

You can flip over cards so the ith card has either side (Ai or Bi) on top. However, you cannot reorder the cards. For instance, arrangements [A1,B2,A3],[B1,A2,A3],[B1,B2,B3] are possible, but [B2,A3,A1] is not a valid arrangement.

A card sequence is called elegant if no two cards showing the same colour are adjacent. For instance, [1,2],[3,4,3,7],[11,13,10] are elegant sequences, but [2,2],[4,3,3,7] are not.

How many ways are there to arrange the cards in such a way?

### Input
The first line contains a single integer N (1≤N≤2∗105) - the number of cards.

Following are N lines. Each line consists of 2 space-separated integers Ai, Bi (1≤Ai,Bi≤109).

### Output
Print the number of possible elegant sequences. Since the answer might be large, compute it modulo 998244353.

### Example

**Input:**
3
1 2
3 4
3 7


**Output:**
3
