#include <stdio.h>

void remove_spaces(char str[]){
    int i  = 0, j = 0;
    while(str[i] != '\0'){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}
int main(){

    char s[] = " C Programming Rules ! ! ! ";
    remove_spaces(s);
    printf("string: %s\n", s);

    return 0;
}