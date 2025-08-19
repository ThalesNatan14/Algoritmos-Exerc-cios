#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat_string(const char* str1, const char* str2){
    int len = strlen(str1) + strlen(str2);
    char* str = malloc(len * sizeof(char));

    strcat(str, str1);
    strcat(str, str2);
    str[len] = '\0';
    return str;
}

int main(){

    char* str3 = concat_string("Hello ", "Word!");

    printf("%s\n", str3);

    free(str3);

    return 0;
}