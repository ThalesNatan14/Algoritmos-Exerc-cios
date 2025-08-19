#include <stdio.h>

void init_values(int rows, int cols, int m[rows][cols], int start, int step){
    int i, j, temp = start;
    for( i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            m[i][j] = temp;
            temp += step;
        }
    }
    printf("\n");
}

void print_matrix(int rows, int cols, int m[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int v[4][6];
    init_values(4, 6, v, 10, 2);
    print_matrix(4, 6, v);

    return 0;
}