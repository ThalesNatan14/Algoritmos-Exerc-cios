#include <stdio.h>

int main(){

    int a = 5;
    int b = 7;
    int i = 0;
    
    while(i < b){
        a += a;
        i++;
    }

    printf("%d\n", a);

    return 0;
}