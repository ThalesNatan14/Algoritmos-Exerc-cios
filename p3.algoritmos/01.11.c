#include <stdio.h>
#include <stdlib.h>

int file_exists(const char* filepath){
    FILE* file = fopen(filepath, "r");
    if(!file){
        return 1;
    }
    printf("Arquivo aberto com sucesso\n");

    return 1;

    fclose(file);
}

int main(){

    int res = file_exists("p3.algoritmos/dados.txt");
    printf("%d\n", res);


    return 0;
}