Week 11

### prob1
```
word[]
j = 0
iter=0
while 1
    iter++
    for i=0:26
        c = alphabet[i]        
        if word[j] == c
           j++
    if j>= word.size
        break
        
ans = iter        
```

### prob2_bronze
1 3 5 7 9 11 13
1 1 1 1 1 1  1  0 0 0 0

1 3,5 9 11+13 X

1,3  5  7,9,11,13

1. get n_even, n_odd
   1. n_even == n_odd  -> n_odd * 2
   2. n_even < n_odd   
                -> n_even * 2   + [leftover odds]
                                n_left / 3 * 2 + ...
                   0 1 1 -> 0,1,1
                   0 1 1 1 -> 0 1 1,1
   3. n_even > n_odd -> n_odd * 2 + 1

### prob3_bronze

b1, b2, ... bN
C1, C2, ... CN  
      sort (C, C+N)

N * (N-1) * (N-2) * ... * 1 -> N!
C1 * (C2-1) * (...) .... * 1 

### prob1_silver
* understand the process swapping K times
* P[N]    P[i] : i-> P[i]  // P[i] -> i
* what is the P[N] after K swaps
```
P[i] = i  // P[i] -> i
for k=0:K
    // swap A[k], B[k]
    P[A[k]] = B[k]
    P[B[k]] = A[k]
// Got P[N] after a round of K
```
if cow i never moved, then cow i is in its own clique
if cow i and j swaps, then the 2 cows will never leave the 2 position , these 2 cows form a clique
...
Each clique of size m, each cow inside this clique will take m unique positions
```

* How do we find cliques with P[N]
for i = 0:N
    // follow i, add any new position to a set, until it hits an old position ->
    // the time is your clique size, the elem in the set is your clique

#include <set>
std::set<int> A
A.insert(xx)
A.count(xx) > 0

std::multi_set<int>

### prob2_silver
ABBAABCB   ans = count(s)
AB....CB   ans = count(s1) + count(s2) 
....ABCB   ans = count(s1=='') + count(s2)

For q=0:Q
   get s1, get s2
   ans = count(s1) + count(s2)
   
O(NQ) -> 10^10   
The key is to figure out how to reuse the computation between Q


```

C1 < C2 < C3 
