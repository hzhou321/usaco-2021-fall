Wk 6

std::cin, std::cout, std::cin>>var; std::cout<<var;

# FILE* In = fopen("file", "r"); fscanf(In, "%d", &var);

scanf("%d", &var);

# FILE* Out = fopen("file", "w"); fprintf(Out, "%d\n", var);

printf("%d\n", var);

## prob1 - Cow Gymnastics

In bronze: **cononical** for-loop, for (int i = i0; i < max; i++)  # [min, max)

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
 
 foreach pair ->   for(int i=0; i<N; i++) {
                       for (int j =0; j<i; j++) {
                           ...
                       }
                   }
 How do you traslate from a permutation to order          
 
 Preprocess --
 P[]  P[i] --- cow P[i] is at position i
 Q[]  Q[i] --- cow i is at position Q[i]
 
 for i=0:N
     Q[P[i]] = i
     
     
