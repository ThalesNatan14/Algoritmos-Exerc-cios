#include <stdio.h>

void insert_spaces(char str[]){
    int i = 0, len = 0;
    while(str[len] != '\0'){
        len++;
    }
    int fim = len * 2 - 1;
    str[fim+1] = '\0';

    for(i = len - 1; i >= 0; i--){
        str[fim] = str[i];
        fim -= 2;
        if(fim >= 0){
            str[fim] = ' ';
            fim--;
        }
    }

}

int main(){

    char s[30] = "C-code-rules!";
    insert_spaces(s);
    printf("Resultado: %s\n", s);


    return 0;
}