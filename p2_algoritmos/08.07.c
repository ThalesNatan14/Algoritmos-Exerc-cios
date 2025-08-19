#include <stdio.h>

void sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int m3[rows][cols]){
    int i, j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void print_matrix(int rows, int cols, int m3[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%2d ", m3[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int m1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int m2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int m3[3][3];
    
    sum(3, 3, m1, m2, m3);
    print_matrix(3, 3, m3);

    return 0;
}