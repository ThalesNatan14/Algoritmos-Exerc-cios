#include <stdio.h>
#include <string.h>

void vec_to_str(int n, int vec[], char str[]){
    int i = 0;
    char j = 0;
    int k = 0;
    for(i = 0; i < n; i++){
        if(vec[i] < 0){
            vec[i] *= -1;
            k = vec[i];
        }
        str[j] = vec[i] + 48;
        str[j++];
    }

    
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c ", str[i]);
    }
    printf("\n");
}

int main() {

    int v[] = {1, 2,-6, 7, 9,-1, 2};
    char str[20];
    vec_to_str(7, v, str);
    

    return 0;
}