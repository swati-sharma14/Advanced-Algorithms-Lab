## The Curse Of The Baboon

**Time limit per test:** 1.0 s  
**Memory limit per test:** 256 megabytes  
**Input:** standard input  
**Output:** standard output

"Gone are the days… When the world knew Mr.Kong. Now hail to King Kong!"
The vast empire of King Kong now touches the ends of this planet. His kingdom consists of N cities and M undirected roads.

Alas, the great baboon Mr.Wise cursed King Kong such that for any road i (1≤i≤M) that connects cities Ui and Vi, if the queen travels via this road at monkey time t, she'd take Yi(t+1)+Xi amount of monkey time to reach city Vi. (NOTE: division here represents integer division). Now the Queen plans to leave the summer capital (city 1) at monkey time 0 or any number of integer monkey time units later such that for any city she visits while going on her journey to the winter capital (city N), she can stay in that city for an integer monkey time units. You being her trusted algo-rythm expert is tasked with finding this minimum time. If the Queen cannot reach the city N, print -1.

### Input
The first line of input consists of two integers N and M (2≤N≤10^5, 0≤M≤10^5).  
The next M lines contain the description of the undirected roads.  
Each line consists of four integers Ui, Vi, Xi, Yi (1≤Ui,Vi≤N, 0≤Xi,Yi≤10^9).

### Output
Print the minimum time possible according to the problem statement.

### Example

**Input:**
4 4
1 2 5 2
1 3 3 7
2 3 2 4
3 4 3 1


**Output:**
10
