#include <stdio.h>

int check_identity(int rows, int cols, int m[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i > j){
                if(m[i][j] != 0){
                    return 0;
                }
            } else if(i < j){
                if(m[i][j] != 0){
                    return 0;
                }
            } else if(i == j){
                if(m[i][j] != 1){
                    return 0;
                }
            }
        }
    }
    return 1;
}


int main(){

    int m[3][3] = {
        {1,0,1},
        {0,1,0},
        {0,0,1}
    };

    int res = check_identity(3, 3, m);
    printf("%d\n", res);

    return 0;
}