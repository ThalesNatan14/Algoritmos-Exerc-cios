#include <stdio.h>

void sum_avg(int* v, int* sum, float* avg){
    int *p = v;
    int i = 0;
    while(*p != -1){
        *sum += *p;
        i++;
        p++;
    }
    *avg = *sum / i;
    printf("%d\n", *sum);
    printf("%.2f\n", *avg);
}

int main(){

    int vet[] = {6,2,3,4,5,-1};
    int res = 0;
    float med = 0;
    sum_avg(vet, &res, &med);

    return 0;
}