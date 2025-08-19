#include <stdio.h>
#include <stdlib.h>

int* sum(int n1, int* v1, int n2, int* v2){
    if(n2 > n1){
        int* temp = v1;
        v1 = v2;
        v2 = temp;
        int ntemp = n1;
        n1 = n2;
        n2 = ntemp;
    }
    int*res = malloc(sizeof(int) * n1);
    for(int i = 0; i < n1; i++){
        res[i] = v1[i];
    }
    for(int i = 0; i < n2; i++){
        res[i] += v2[i];
    }
    return res;
}

int main(){

    int va[] ={1, 2, 3, 4, 2};
    int vb[] = {7, 3, 2};

    int* res = sum(5, va, 3, vb);
    for(int i = 0; i < 5; i++){
        printf("%d ", res[i]);
    }

    return 0;
}