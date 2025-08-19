#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int replace_char(const char* filepath, char* oldchar, char newchar){
    FILE* file = fopen(filepath, "r+");
    if(!file) return -1;

    char c = fgetc(file);
    int pos;
    while(c != EOF){
        pos = ftell(file);
        for(int i = 0; oldchar[i] != '\0'; i++){
            if(c == oldchar[i]){
                fseek(file, pos - 1, SEEK_SET);
                fputc(newchar, file);
                fseek(file, pos, SEEK_SET);
                break;
            }
        }
        c = fgetc(file);
    }

    fclose(file);
    return 0;
}

int main(){

    replace_char("dados.txt", "aeio", 'X');


    return 0;
}