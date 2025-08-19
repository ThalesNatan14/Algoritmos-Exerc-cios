#include <stdio.h>
#include <stdlib.h>

int check_or_create(const char *filepath){
    FILE* file = fopen(filepath, "r");
    if(file){
        fclose(file);
        return 1;
    }
    file = fopen(filepath, "w");
    if(file){
        fclose(file);
        return 1;
    }

    return 0;
    
}

int main(){

    int res = check_or_create("p3.algoritmos/lista.txt");
    printf("%d\n", res);
    return 0;
}