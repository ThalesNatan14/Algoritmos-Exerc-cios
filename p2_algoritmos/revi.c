#include <stdio.h>   
#include <stdlib.h> 

int* create(int n){
    int* v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        v[i] = i;
    }
    
}

int main(){

    for(int i  = 0; i < 10; i++){
        create(1000);
    }
    
    printf("Pressione algo...\n");
    char c;
    scanf("%c", &c);

    return 0;
}