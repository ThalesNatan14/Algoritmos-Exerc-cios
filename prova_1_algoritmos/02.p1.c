#include <stdio.h>

void uncompress(int n, int vec[]){
    int i = 0;
    int valor = 0;
    int rep = 0;
    while(i < n){
        if(vec[i] == -1){
            valor = vec[i+1];
            rep = vec[i+2];
            for(int j = 0; j < rep; j++){
                printf("%d", valor);
            }
            i += 3;
        } else {
            printf("%d", vec[i]);
            i++;
        }
        
    }
}

int main(){

    int vec[] = {1, -1, 2, 3, -1, 3, 2, 4,-1, 6, 3, -1, 5, 12};
    uncompress(14, vec);

    return 0;
}