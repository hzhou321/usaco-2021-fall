Week 9 - 2020 Open

## Pre-sort the input

int A[N];
A == &A[0]
A[0], A[1], A[2], ..., A[N-1]
A   --> &A[0]
A+0 --> &A[0]
A+1 --> &A[1]
...
A+N --> &A[N]

int A[N];
std::vector<int> B;

### Ascending Sort   A[0] <= A[1] <= ... <= A[N-1]  
* std::sort(A, A+N)
* std::sort(B.begin(), B.end())

for (int i = 0; i < N; i++) { A[i]; }    // operator 
for (auto iter = B.begin(); iter != B.end(); iter++) { *iter; }                     

### Descending sort
  Lambda (λ) --> anonymous function
  int FuncName(params..) { ...}
```  
  std::sort(A, A+N,  [](int a, int b) -> bool {
     return a > b; 
  });
```  
  
### Permutation sort
int A[N];
int P[N] = {0, 1, 2, ..., N-1}
std:sort(P, P+N, [A](int a, int b) -> bool { return A[a] < A[b]; })  --> P[0] is the index of the smallese member in A
  
## Prob1 Bronze
The key here is preprocess -- > get the largest 2  gaps / spaces
enumerate --
  case 1: put 2 cows in the largest gap
  case 2: put 1 cow in the largest gap, put cow 2 in the 2nd largest gap
each case -> minimum gap , compare to the min 
  
## Prob2 Bronze  
  
