#include <stdio.h>
#include <string.h>

void print_strings_minmax(int n, int len, char list[n][len]){
   int min = len + 1;
   int max = -1;
   int tam = 0;
   for(int i = 0; i < n; i++){
        tam = strlen(list[i]);
        if(tam < min){
            min = tam;
        } else if(tam > max){
            max = tam;
        }
   }

    for(int i = 0; i < n; i++){
        if(strlen(list[i]) == min){
            printf("Menor: %s\n", list[i]);
        }
        if(strlen(list[i]) == max){
            printf("Maior: %s\n", list[i]);
        }
    }

}

int main(){

    char v[6][20] = {"Joh", "Mariane", "Jak", "Samuel", "Ada", "Michelangelo"};
    print_strings_minmax(6, 20, v);

    return 0;
}