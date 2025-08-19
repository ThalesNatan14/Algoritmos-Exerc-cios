#include <stdio.h>

void transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]){
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            m2[i][j] = m1[j][i];
        }
    }
}

void print_matrix(int rows, int cols, int m2[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%2d ", m2[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int m1[2][3] = {
        {1, 3, 5},
        {2, 4, 6}
    };

    int m2[3][2];

    transpose(2, 3, m1, 3, 2, m2);
    print_matrix(3, 2, m2);

    return 0;
}