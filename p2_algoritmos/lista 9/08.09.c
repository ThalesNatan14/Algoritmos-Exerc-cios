#include <stdio.h>
#include <limits.h>

//questão 05 da lista 09;

void get_min_max(int n, const int* v, int* min, int* max){
    const int *p = v;
    for(int i = 0; i < n; i++){
        if(*p > *max){
            *max = *p;
        }
        if(*p < *min){
            *min = *p;
        }
        p++;
    }
    
     printf("Max: %d\n Min: %d\n", *max, *min);

    printf("\n");
}

int main(){

    int v[] = {1, 3, 5, 7, 9};
    int min = INT_MAX;
    int max = INT_MIN;
    
    get_min_max(5, v, &min, &max);
    return 0;
}