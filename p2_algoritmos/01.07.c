#include <stdio.h>
#include <limits.h>

void print_min_max(int rows, int cols, int m[rows][cols]){
    int max = INT_MIN, min = INT_MAX;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(m[i][j] > max){
                max = m[i][j];
            }
            if(m[i][j] < min){
                min = m[i][j];
            }
        }
    }
    printf("max = %d\n", max);
    printf("min = %d\n", min);
    printf("\n");
}

int main() {

    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        };
    
    print_min_max(3, 3, mat);


    return 0;
}