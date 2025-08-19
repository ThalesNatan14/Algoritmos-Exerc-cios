#include <stdio.h>

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
    return 1;

    fclose(file);

}

int write_text(const char* filepath, const char* text){
    FILE* file = fopen(filepath, "w");
    if(!file){
        printf("ERRO: nao foi possivel acessar arquivo\n");
        return 0;
    }

    printf("INFO: Arquivo aberto:\n");

    for(int i = 0; text[i] != 0; i++){
        fputc(text[i], file);
    }

    fclose(file);
    return 1;
}

int main(){

    write_text("dados.txt", "Um outro arquivo");
    read_text("dados.txt");

    return 0;
}