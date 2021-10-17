Wk 6
=====
```
std::cin, std::cout, std::cin>>var; std::cout<<var;

-- FILE* In = fopen("file", "r"); fscanf(In, "%d", &var);

scanf("%d", &var);

-- FILE* Out = fopen("file", "w"); fprintf(Out, "%d\n", var);

printf("%d\n", var);
```
## prob1 - Cow Gymnastics

In bronze: **cononical** for-loop, for (int i = i0; i < max; i++)  # [min, max)
```
count = 0
foreach pair
    order = 0
    foreach K
        if a < b
            tmp_order = -1
        else 
            tmp_order = 1
        if order not 0 and order != tmp_order
            break
     if flag_consistent
        count++
        
 printf("%d\n", count)       **Always: use braces **
 ```
 ```
 foreach pair ->   for(int i=0; i<N; i++) {
                       for (int j =0; j<i; j++) {
                           ...
                       }
                   }
 ```                  
 How do you traslate from a permutation to order          
 
 Preprocess --
 * P[]  P[i] --- cow P[i] is at position i
 * Q[]  Q[i] --- cow i is at position Q[i]
 ```
 for i=0:N
     Q[P[i]] = i
 ```    
     
## Prob 2 - where am I

* Enumerate all sequences
  * seq of 1  
  * seq of 2
  * ...
``` 
char A[100]  --> scanf("%s", A)
for k = 1:N
    for i=0:N-(k-1)
        for j=0:i
            if strncmp(A[i], A[j], k) == 0
                goto next_k
    ans = k;            
    break;            
    next_k: continue;
```    
## Prob 3 - Lineup
```
char ID_list[8][20] = {"Bessie", "Buttercup", ..., "Sue"};
>> N
char tmp[6][20];
for i=0:N
    for j=0:6
        >> tmp[j]
    id_a = find_cow(tmp[0])
    id_b = find_cow(tmp[5])
    add_adj(id_a, id_b)
    add_adj(id_b, id_a)

int num_adj[8]
int Cow[8][2]
for i=0:8
   num_adj[i] = 0
```
### utility functions
```
int find_cow(char * name)
   for (int i=0:8) {
       if strcmp(name, ID_list[i]) == 0
          return i
          
void add_adj(int a, int b)
    if (num_adj[a] == 0) {
        num_adj[a]++
        Cow[a][0] = b;
    } else if (num_adj[a] == 1) {
        num_adj[a]++
        Cow[a][1] = b;
    } else {
        printf("ERROR PANIC!");
    }
```   
1. Work on the semantics
2. work out the logics
3. work out what data (structure) you need -- how natural
4. find the usage and purpose and your need
5. figure out the tools -- write your utitlity function


