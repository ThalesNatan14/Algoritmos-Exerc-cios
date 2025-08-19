#include <stdio.h>
#include <stdlib.h>

int save_string(const char *filepath, const char* text){
    FILE* file = fopen(filepath, "w");
    if(!file){
        printf("Erro ao acessar arquivo\n");
        return 0;
    }

    printf("Arquivo acessado:\n");

    for(int i = 0; text[i] != 0; i++){
        fputc(text[i], file);
    }

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

    save_string("/mnt/c/Users/thale/p3.algoritmos/dados.txt", "Clube de Regatas do Flamengo");
    read_text("/mnt/c/Users/thale/p3.algoritmos/dados.txt");

    return 0;
}