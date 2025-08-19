#include <stdio.h>

void switch_diagonals(int d, int m1[d][d]){
    int i, temp;
    for(i = 0; i < d; i++){
        temp = m1[i][i];
        m1[i][i] = m1[i][d-1-i];
        m1[i][d-1-i] = temp;
        
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

    int mat[3][3] = {
        {1, 2, 3},  
        {4, 5, 6},
        {7, 8, 9}
    };
    switch_diagonals(3, mat);
    print_matrix(3, 3, mat);

    return 0;
}