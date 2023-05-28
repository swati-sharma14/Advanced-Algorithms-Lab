## Easter Hunt

**Time limit per test:** 2 seconds  
**Memory limit per test:** 1024 megabytes  
**Input:** standard input  
**Output:** standard output

Easter is just 355 days away, and Temi is hard at work designing an Easter egg hunt.

The hunt will be organized in a field, which can be denoted as a tree with N vertices, numbered 1, 2, ..., N. For each i (1≤i≤N−1), the i-th edge connects Vertex ui and vi.

Temi has decided that for each vertex of the tree, either an easter egg will be placed or the node will remain empty. To keep the hunt interesting, they are not allowed to place eggs on two adjacent vertices (that is, vertices connected directly via an edge).

Find the number of ways in which the eggs can be placed. Since the number can be large, compute it modulo 10^9+7.

### Input
The first line contains a single integer N (1≤N≤10^5), the number of nodes in the tree.

The next N−1 lines describe the edges of the tree. Each line contains 2 space-separated integers ui and vi (1≤ui,vi≤N).

It is guaranteed that the input graph forms a tree.

### Output
Print the number of ways in which the eggs can be placed, modulo 10^9+7.

### Example

**Input:**
5
1 2
1 3
2 4
2 5

**Output:**
18
