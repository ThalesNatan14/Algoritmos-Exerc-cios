#include <stdio.h>
#include <stdlib.h>

char* get_content(const char *filepath){
    FILE* file = fopen(filepath, "r");
    if(!file){
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    int n = ftell(file)/sizeof(char);
    fseek(file, 0, SEEK_SET);

    char* str = malloc(sizeof(char) * (n+1));

    int i = 0;
    char c = fgetc(file);
    while(c != EOF){
        str[i] = c;
        i++;
        c = fgetc(file);
    }
    
    fclose(file);
    return str;
}

int main(){

    char* res = get_content("dados.txt");
    printf("%s\n", res);
    free(res);


    return 0;
}