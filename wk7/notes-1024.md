Week 7 - USACO 2001

## Prob 1 Work processor 

All finished. Time may vary. 

## Prob 2 Photo

What is lexicograph order

    ab < ba, ab < adb, ab < abc
    
* we need test whether a sequence is a non-repeating sequence
```
# preprocess
for i=0:N
   B[i] -= 2

bool map[N];
for i=0:N
    map[i] = false
prev = 0    
for i=0:N
    map[i] = true
    a = B[i] - prev
    if map[a] # duplicating
        fail
    else
       map[a] = true

    prev=a
```

## map or set
std::set<int>  Map;
```
  for i=0:N
    Map.insert(i)
    a = B[i] - prev
    if Map.count(a)>0 # duplicating
        fail
    else
       Map.insert(a)
    prev=a
```
  
## race  
1. increace speed from 0 to a
  D1(a) = 1 + 2 + 3 + ... + a = (1+a)*a/2
2. decrease speed from a to X
  D2(a, X) = a-1 + a-2 + ... + X = (a-1+X) * (a-X) /2
3. case work
  0. D1(a) >= K, when a < X --> a
  1. D1(a) + D2(a, X) >= K  --> a + (a-X) 
      1. overshoot by less than a --> a + a -X
      2. overshoot by >= a --> a + a - X - 1
  
logic
```
a = 1  
while (D1(a) + D2(a, X) < K) {
    a++;                        
}

D = D1(a) + D2(a, X)                            
if (D == K) {
    /* done. -> ans */                            
} else if (D - K <= a + a - X) {
    /* lower speed of (D-K) segment, done, same ans */                 
}                     

```
                    
Gaussian formula : a0, a1, ..., a_n -> sum (a_1...a_n) -> (a_1 + a_n) / 2 * n     
  
  
## Binary search -- * The NO 1 algorithm *
  
A[N]

Search - find  one number that matches certain criteria

### first, *linear search* or "bronze" method  
```  
for i=0:N
   if match(A[i]) 
       ans = i
       break
```  

* if the problem is general, means no additional propery, then you have to check one by one
* if let's say, A[N] is ordered, and you need find one number --> so we will skip and jump --> binary search
  
