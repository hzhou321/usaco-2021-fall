

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
