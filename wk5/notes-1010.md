Wk 5

19 Open
prob 1 bucket
1. INPUT -> bx, by, lx,ly, rx, ry (eg B 2, 3, L 5, 8)
2. Assume no rock
   * diff_y = abs(ly - by)
   * diff_x = abs(lx - bx)
   * ans = diff_y + diff_x - 1
3. there is rock
   * if (diff_x == 0 && middle) {
   *     ans += 2;
   * } else if (diff_y == 0 && middle) {
   *     ans += 2;
   * }

a, b, c, how to tell that b is in the middle of a and c -> 
* if (a < b && b < c || c < b && b < a)
* if b != min(a, b, c) && b != max(a, b, c)
* if (a-b) * (c-b) < 0

Prob 2 factory
Understand a tree
* Node
* Edge  -- bi-direct (no direction) -- undirected graph
*          directional  -- directed graph
* Tree 
    * N node
    * N-1 edge (directional)
    * All connected 
    * No cycles   
    * Root, children, leaf
    * topologically, Any node can become a root, tree will be different with different root
Finding root
    int parents[N] = {0}
    foreach edge
        parents[src]++
    foreach node
        if parents[node] == 0
           ans = node
           
Prob 3 evolution
    1. INPUT
    2. find group of animals for each attribute -> attribute group
    3. foreach attribute_group_*pair*
        find if they are proper subgroup or no intersection
        proper means (num_common == N_A or num_common == 0)

## Sort
* Bubble sort
* A[N]
* ? Permutation, how many? -> N!
* Permutation P[N], for i=0:N; P[i] = i
* Reason for permutation array -- P[N] is one more level of abstraction from A[N]
* inverse pair
```
for i=0:N-1
    for j=0:i
        if A[i] > A[j]
            swap(A[i], A[j])  -- tmp = A[[i], A[i] = A[j], A[j] = tmp;                       
```
* each sub loop biggest bubble to top 
* N-1 guarantee n-1 bubbles, -> all must be sorted 

Complexity - Big O notation -- O(N2)

* insertion sort
    foreach -- N
        pick
        insert
          find -- N
          shift -- N
          put-it-in
* Complexit O(N2)

Insertion sort is more reliable, more robust 
Other than easy write, there is *NO* benefit for bubble sort

* selection sort
*   foreach -- N
*       find/select (smallest) -- N
*       shift  -- N
*       put-it-in
```
for i=0:N
   min = INT_MIN
   for j = i:N
       if min > A[j]
          min = A[j]
   swap(A[i], A[i_min])     
```
