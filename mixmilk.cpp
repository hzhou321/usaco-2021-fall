#include <stdio.h>

int C[3], M[3];

int main() {
    FILE *in = fopen("mixmilk.in", "r");
    int ret;
    ret = fscanf(in, "%d %d %d %d %d %d", &C[0], &M[0], &C[1], &M[1], &C[2], &M[2]);
    printf("c0 = %d\n", C[0]);
    return 0;
}
