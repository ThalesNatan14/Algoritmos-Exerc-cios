#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stringcat_all(int n, char str[n][51]){
    int len = 0;
    for(int i = 0; i < n; i++){
        len += strlen(str[i]);
    }
    
    len += 1 + n - 1; //NULL E ESPAÇOS

    char* str1 = malloc(len * sizeof(char));
    str1[0] = '\0';
    
    for(int i = 0; i < n; i++){
        strcat(str1, str[i]);
        strcat(str1, " ");
    }
    return str1;
}

int main(){

    char words[][51] = {"Um", "Dois", "Tres", "Quatro"};
    char* str = stringcat_all(4, words);

    printf("Resultado: %s\n", str);

    free(str);


    return 0;
}