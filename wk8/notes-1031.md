

This encodes the meaning in an index. You are mentally remembering and decoding the meaning.

Alternatively, we can do --
```
int X[100];
int Y[100];

points[i][0] --> X[I]
```
Rule of thumb, only use Array for symmetric or uniform containers

* struct
  struct vs class
  * struct doesn't method -- functions -- data only
  * class almost always have method, they emphasize method
  
```
  struct point {
      int x;
      int y;
  };

  struct point points[N];

  points[i].x
  ```
  
  a, b, c, if we know a is the corner, and a.x==b.x, diff_y = abs(a.y-b.y)
                                                     diff_x = abs(a.x-c.x)
  area = diff_x * diff_y                                                     

### dont write "fake" for-loop. unless it is `for i=0:N` and i is not altered inside the loop

### ideas of cycles
a0->a1->...->an  (an == a1) cycle = n --> K %= cycle

the state of a is the whole array. For whole array to repeat is hard -> cycle is still too big --> essentialy it is \PI cycles_i

Idea of **permutation array**
After each A-B reversing --> P[N]  in which P[i] mean i goes to P[i]

```
P[N] = {0, 1, 2, ...}  // P[i] = i
swap(A)
swap(B)
// i -> P[i]

point 0, outside both A and B range, cycle == 0
point A[0], cycle > 0
```
What we need realize is -- in a permutation, different points have different cycles.

```
for i = 0: N
    cycle = 1
    j = P[i]
    while j != i
       j = P[j]
       cycle++
    k = K % cycle
    j = i
    for k2 = 0:k
       j = P[j]
    // j is the answer for i the point
```    
## Permutation array P[i]

* identity purmutation P[i] = i
* reversing permutation P[i] = N-1-i -- cycle of 2
* cycle -- groups   {0, 1}, {2, 3, 4}, {5}
* number of inverse pairs. A pair (i, j), if i<j and P[i]>P[j], then we call this pair a inverse pair.

## binary search 
Imagin a handful ordered card. 

** Canonical Binary Search **
```
A[N]
given k, look maximum i where A[i]<=k
```
```
i1 = 0
i2 = N-1  // A[i1]<=k, A[i2]>k
while i1<=i2
    i3 = (i1 + i2) / 2
    if A[i3] < k
       i1 = i3 + 1
    else
       i2 = i3 - 1
```
# i2 < i1 -> i2 + 1 == i1
# a[i1] >= k
    

```
