#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy_string(const char* str){
    char* new = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(new, str);
    return new;
}

int main(){

    char* str1 = copy_string("Hello!");
    printf("%s\n", str1);
    free(str1);

    return 0;
}