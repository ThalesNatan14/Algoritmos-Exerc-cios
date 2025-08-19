#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_words(int n, int len, char lines[n][len]){
    int cont = 0;
    for( int i = 0; i < n; i++){
        int in_word = 0;
        for(int j = 0; lines[i][j] != '\0'; j++){
            if(!isspace(lines[i][j]) && in_word == 0){
                cont++;
                in_word = 1;
            } else if(isspace(lines[i][j])){
                in_word = 0;
            }
        }
    }
    return cont;

}

int main(){

char v[2][200] = {
    " Computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task.",
    " Programming involves tasks such as analysis, generating algorithms, profiling algorithms accuracy and resource consumption, and the implementation of algorithms in a chosen programming language."
};
    
        int count = count_words(2, 200, v);
    printf("Numero de palavras: %d\n", count);

    return 0;
}