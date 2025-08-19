#include <stdio.h>
#include <stdlib.h>

void init_random(int rows, int cols, int m[rows][cols], int min, int max){
    int i, j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            m[i][j] = min + rand() % (max - min + 1);
        }
    }
}

void print_matrix(int rows, int cols, int m[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int v[4][6];
    init_random(4, 6, v, 5, 50);
    print_matrix(4, 6, v);

    return 0;
}