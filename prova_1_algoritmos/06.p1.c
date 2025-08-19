#include <stdio.h>

int count_inc_sequences(int n1, int v1[]){
    int i = 0;
    int seq = 0;
    while(i < n1){
        if(v1[i+1] - v1[i] == 1){
            i++;
            if(i >= 2){
                seq++;
            }
        }
        i++;
    }
    return seq;
}

int main(){
    
    int vet1[] = {1, 2, 5, 1, 13, 14, 15, 16, 40, -9, -8, 14, 7, 8, 9};
    int res = count_inc_sequences(15, vet1);
    printf("%d\n", res);

    return 0;
}