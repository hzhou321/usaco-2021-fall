#include <stdio.h>

int C[3], M[3];

int main() {
    /* Input */
    FILE *in = fopen("mixmilk.in", "r");
    int ret;
    ret = fscanf(in, "%d %d %d %d %d %d", &C[0], &M[0], &C[1], &M[1], &C[2], &M[2]);
    flcose(in);
    /* Debug */
    printf("c0 = %d\n", C[0]);
    
    /* Algorithm */
    
    /* Output */
    FILE *out = fopen("mixmilk.out", "w");
    for (int i=0; i<3; i++) {
        fprintf(out, "%d\n", M[i]);
    }
    fclose(out);
    return 0;
}
