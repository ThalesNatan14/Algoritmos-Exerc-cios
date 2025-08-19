#include <stdio.h>

int check_symmetric(int d, int m[d][d]){
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            if(m[i][j] != m[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){

    int m[3][3] = {
        {1,2,3},
        {2,4,5},
        {3,5,8}
    };
    
    int res = check_symmetric(3, m);
    printf("%d\n", res);

    return 0;
}