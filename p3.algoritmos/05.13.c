#include <stdio.h>
#include <stdlib.h>

int count_movies(const char* filepath){
    FILE* file = fopen(filepath, "r");
    if(!file) return 0;

    int count = 0;
    char c = fgetc(file);
    while (c != EOF){
        if(c == '\n'){
            count++;
        }
        c = fgetc(file);
    }
    fclose(file);
    return count;
}

int main(){

    int size = count_movies("movies.bin");
    printf("%d\n", size);

    return 0;
}