#include <stdio.h>

int check_upper_triangle(int d, int m[d][d]){
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            if(i > j){
                if(m[i][j] != 0){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main(){

    int m[3][3] = {
        {1,2,3},
        {0,5,6},
        {0,0,8}
    };
    int res = check_upper_triangle(3, m);
    printf("%d\n", res);
    return 0;
}