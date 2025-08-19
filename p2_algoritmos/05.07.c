#include <stdio.h>
#include <limits.h>

int max_line(int rows, int cols, int m[rows][cols]){
    int i, j, soma = 0;
    int max = INT_MIN;
    for(i = 0; i < rows; i++){
        soma = 0;
        for(j = 0; j < cols; j++){
            soma += m[i][j];
        }
        if(soma > max){
            max = soma;
        }
    }
    return max;

}

int main() {

    int mat[5][5] = {
        { 1, 2, 3, 4, 5},
        { 2, 4, 6, 8,10},
        { 1, 2, 3, 4, 7},
        { 2, 0, 6, 1,10},
        { 7, 3, 4, 0, 0}
        };

        int res = max_line(5, 5, mat);
        printf("Maior soma: %d\n", res);


    return 0;
}