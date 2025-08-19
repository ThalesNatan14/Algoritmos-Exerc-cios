#include <stdio.h>
#include <string.h>
//questão 08 da lista 09

void get_hamming_distance(const char* str1, const char* str2){
    int d = 0;
    const char *p = str1;
    const char *p2 = str2;
   /* if(strlen(str1) != strlen(str2)){
        printf("Tamanhos distintos!!");
        return;
    }
    for(int i = 0; i < strlen(str1); i++){
        printf("%c", *p);
        p++;
    }
    printf("\n");
    for(int i = 0; i < strlen(str2); i++){
        printf("%c", *p2);
        p2++;
    }
    printf("\n");
    p = str1;
    p2 = str2;
    while(*p != '\0'){
        if(*p != *p2){
            d++;
        }
        p++;
        p2++;
    }*/
    while(*p != '\0'){
        if(*p != *p2){
            d++;
        }
        p++;
        p2++;
    }

    
    printf("%d\n", d);
    printf("\n");
    
    
}

int main(){
    
    get_hamming_distance("banana", "cabana");


    return 0;
}