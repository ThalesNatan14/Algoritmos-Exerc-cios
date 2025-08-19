#include <stdio.h>
#include <string.h>

void string_trim(char str[]){
    int i = 0, inicio = 0, fim = 0, len;
    len = strlen(str);
    while(str[i] == ' '){
        inicio++;
    }
    while(len - 1 == ' '){
        fim--;
    }    
    str[inicio] = '\0';
    printf("%c\n", str[i]);
}

int main(){

    char s[] = "  hello world    ";
    string_trim(s);
    printf("%s\n", s);


    return 0;
}