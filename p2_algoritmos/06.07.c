#include <stdio.h>

void put_totals(int rows, int cols, int m[rows][cols]){
    int i, j, soma = 0;
    for(i = 0; i < rows; i++){
        soma = 0;
        for(j = 0; j < cols; j++){
            soma += m[i][j];
            if(m[i][j] == 0){
                m[i][j] = soma;
            }
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

    int mat[4][5] = {
 { 1, 2, 3, 4, 0},
 { 2, 4, 6, 8, 0},
 { 3, 6, 9, 12, 0},
 { 4, 8, 12,16, 0}
 };

 put_totals(4, 5, mat);
 print_matrix(4, 5, mat);

    return 0;
}
