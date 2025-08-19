#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy_reverse(const char* str){
    int len = strlen(str);
    char* str2 = malloc((strlen(str) + 1) * sizeof(char));

    for(int i = 0; i < len; i++){
        str2[i] = str[len-1-i];
    }
    str2[len] = '\0';
    return str2;
}

int main(){

    char* str1 = copy_reverse("Hello!");
    printf("%s\n", str1);
    free(str1);
    return 0;
}