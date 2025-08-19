#include <stdio.h>

int main(){
    int a = 5;
    char b = 'a';
    double c = 13.20399492310;

    printf("a: %p\n", &a);
    printf("b: %p\n", &b);
    printf("c: %p\n", &c);

    return 0;
}