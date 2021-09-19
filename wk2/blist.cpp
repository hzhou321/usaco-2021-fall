#include <cstdio>
int N;
int start[10], finish[10], buckets[10];
int main () {
    // --- INPUT BLOCK
    FILE *In = fopen("blist.in", "r");
    int ret = fscanf(In, "%d", &N);
    for (int i=0;i<N;i++){
        ret= fscanf(In, "%d %d %d", &start[i], &finish[i], &buckets[i]);
    }
    fclose(In);
    // -- Preprocess BLOCK
    // -- Algorith BLOCK
    int num_total = 0;
    // -- Output BLOCK
    FILE *Out = fopen("blist.out", "w");
    fprintf(Out, "%d\n", num_total);
    fclose(Out);
    return 0;
}
