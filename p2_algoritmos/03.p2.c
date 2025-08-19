#include <stdio.h>

int sum_of_sides(int n, int v[n][n]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n -1 || j == 0 || j == n -1){
                sum += v[i][j];
            }
        }
    }
    return sum;
}

int main(){

    int vet[4][4] = { 
        { 1, 2, 3, 4,},
        { 5, 6, 7, 8,},
        { 1, 7, 0, 2,},
        { 9,10,11,12 }
    };

    int res = sum_of_sides(4, vet);
    printf("soma: %d\n", res);
    return 0;
}