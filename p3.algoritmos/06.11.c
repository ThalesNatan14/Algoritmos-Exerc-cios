#include <stdio.h>
#include <stdlib.h>

int save_lines(const char *filepath, int n, const char text_lines[n][51]){
    FILE* file = fopen(filepath, "w");
    if(!file){
        printf("Erro ao acessar arquivo\n");
        return 0;
    }
    printf("Arquivo acessado:\n");
    for(int i = 0; i < n; i++){
        fprintf(file, "%s\n", text_lines[i]);
    }

    fclose(file);
    return 1;
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
    return 1;

}



int main(){

    char text[][51] = {"Um", "Dois", "Tres", "Quatro", "Cinco"};
    save_lines("/mnt/c/Users/thale/p3.algoritmos/dados.txt", 5, text);
    read_text("/mnt/c/Users/thale/p3.algoritmos/dados.txt");

    return 0;
}