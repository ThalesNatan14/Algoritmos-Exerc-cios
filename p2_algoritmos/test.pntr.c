#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int v[] = {1, 3, 5, 6, 7};

    int *p = v;

    printf(" %d\n", *p);

    p += 1;
    printf(" %d\n", *p);

    p += 3;
    printf(" %d\n", *p);

    for(int i = 0; i < 5; i++) {
        printf(" %d ", *p);
        p++;
    }
    printf("\n");

    char str[] = "Hello word of pointers!";

    for(char *p = str; *p != 0; p++){
        printf("%c ", *p);
        p++;
    }
    printf("\n");

    return 0;
}
