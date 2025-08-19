#include <stdio.h>
#include <stdlib.h>

int read_file(const char* path){
    
    FILE* file1 = fopen("dados1.txt", "r");
    if(!file1){
        return 1;
    }
    //obtendo tamanho do arquivo
    fseek(file1, 0, SEEK_END);
    int filesize = ftell(file1)/sizeof(int);
    printf("file size: %d\n", filesize);
    fseek(file1, 0, SEEK_SET);

    printf("File size: %d\n", filesize * (int)sizeof(int));
    int buffer[filesize];
    int read = (buffer, sizeof(int), filesize, file1);

    
    printf("Elementos lidos: %d\n", read);
    for(int i = 0; i < filesize; i++){
        printf("%d ", buffer[i]);
    }

    printf("\n");

    fclose(file1);    
}

int write_file(const char* path, const int* buffer, int n){
     FILE* file1 = fopen("dados1.txt", "w");
    if(!file1){
        return 1;
    }

    int read = fwrite(buffer, sizeof(int), 10, file1);
    printf("Elementos escritos: %d\n", read);

    fclose(file1);
}

int main(){ 
    
    int v[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 56, 57};
    write_file("dados1.txt", v, 10);
    read_file("dados1.txt");
    

    return 0;
}