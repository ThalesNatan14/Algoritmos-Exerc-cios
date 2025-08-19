#include <stdio.h>
#include <stdlib.h>

int append_string(const char *filepath, const char* text){
    FILE* file = fopen(filepath, "a");
    if(!file){
        printf("Erro ao acessar arquivo\n");
        return 0;
    }
    printf("Arquivo acessado:\n");
    fprintf(file, " ");
    fprintf(file, "%s", text);
    
    printf("\n");
    fclose(file);
}

int read_text(const char* filepath){
    
    FILE* file = fopen("dados.txt", "r");

    if(!file){
        printf("ERRO ao abrir o arquivo\n");
        return 0;
    }

    printf("Arquivo aberto com sucesso\n");

    char c = fgetc(file);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(file);
    }
    printf("\n");
    fclose(file);

}

int main(){

    append_string("/mnt/c/Users/thale/p3.algoritmos/dados.txt", "Maior do mundo");
    read_text("/mnt/c/Users/thale/p3.algoritmos/dados.txt");
    return 0;
}