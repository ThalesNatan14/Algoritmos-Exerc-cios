#include <stdio.h>

void add(int* a, int* b){
    int soma = *a + *b;
    printf("soma: %d\n", soma);
}

int main(){

int a = 5;
int *p_a = &a;
int b = 7;
int *p_b = &b;

printf("a: %d\n", *p_a);
printf("b: %d\n", *p_b);

add(p_a, p_b);

    return 0;
}