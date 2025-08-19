#include <stdio.h>
#include <string.h>
//questão 07 da lista 09

void make_mirrored(char* str){
    int n = strlen(str);
    char *p = str + n;
    *p = '|';
    str = p-1;
    for(int i = 0; i < n; i++){
        p++;
        *p = *str;
        str--;
    }
    p++;
    *p = 0;
}

int main(){

    char name[40] = "John Doe";
    make_mirrored(name);
    printf("%s\n", name);

    return 0;
}