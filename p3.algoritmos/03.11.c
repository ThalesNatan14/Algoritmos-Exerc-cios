#include <stdio.h>
#include <stdlib.h>

int print_content(const char *filepath){
    FILE* file = fopen(filepath, "r");
    if(!file){
        printf("Erro ao acessar arquivo\n");
        return 0;
    }
    printf("Arquivo acessado:\n");

    char c = fgetc(file);
    while (c != EOF){
        printf("%c", c);
        c = fgetc(file);
    }
    printf("\n");
    return 1;
    fclose(file);
    
}

int main(){

    print_content("/mnt/c/Users/thale/p3.algoritmos/dados.txt");

    return 0;
}   