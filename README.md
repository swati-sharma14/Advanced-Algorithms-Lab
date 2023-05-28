## Fix Wiring (Easy Version)

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  
**Input:** standard input  
**Output:** standard output

This is the easy version of the problem. The only difference between the two versions is the input constraints.

You are tasked with establishing connections between 2 networks, P and Q. Each network has many ports arranged in a vertical line. Port 1 is on top of this line, and port i is a unit distance below port i−1 for each i≥2. The port lines of both networks are parallel to each other.

To make the connections, you are given n wires, and n instructions, i-th instruction being of the form (pi, qi). This means that the i-th wire must be connected from port pi of network P to port qi of network Q.

For example, given n=4 and instructions (4,2),(1,3),(3,4),(2,1), the final connections are as follows:

[Diagram of connections]

After completing the circuit, you are perplexed by how complicated the circuit looks. You want to know the number of wire intersections in the resulting connections.

Two wires are said to intersect if they have different start ports, different end ports, and the two overlap at some point in their resulting connection.

In the above figure, wire overlaps have been circled. In this case, there are 3 wire overlaps.

### Input
The first line is a single integer n (1≤n≤103), the number of wires to be connected in the network.

n lines follow. The i-th line contains 2 space-separated integers pi, qi, (1≤pi,qi≤109), denoting that the i-th wire connects port pi of line P to port qi of line Q.

### Output
Print a single integer - the number of wire overlaps observed.

### Examples

**Input:**
4
4 2
1 3
3 4
2 1


**Output:**
3


**Input:**
6
3 5
2 3
4 1
6 6
3 5
4 2


**Output:**
6


**Note**
In test 2, the wire intersections are as follows:

- Wire 1 intersects with wire 3.
- Wire 1 intersects with wire 6.
- Wire 2 intersects with wire 3.
- Wire 2 intersects with wire 6.
- Wire 3 intersects with wire 5.
- Wire 5 intersects with wire 6.

Note the following:

- Wire 3 does NOT intersect with wire 6. This is because, by the given definition, wires must start and end from different ports to count as an intersection.
- Wire 1 does NOT intersect with wire 5 for the same reason.
