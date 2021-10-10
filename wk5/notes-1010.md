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

