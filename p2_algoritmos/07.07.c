#include <stdio.h>

int matrix_equals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]){
    if(r1 != r2 || c1 != c2){
        return 0;
    }
    int i, j;
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            if(m1[i][j] != m2[i][j]){
                return 0;
            }
        }
    }
    return 1;

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

    printf("%d ", matrix_equals(3, 3, m1, 3, 3, m2));
    printf("\n");

    return 0;
}