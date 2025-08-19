#include <stdio.h>
#include <strings.h>
//questão 09 da lista 09

typedef struct {
	int id;
	char name[51];
	int type; // [1..10]
} Contact;

int find_by_name(int n, const Contact* vec, const char* find) {
    int count = 0;
    
    const Contact* p = vec;
    for (int i = 0; i < n; i++) {
        if (strstr(p->name, find) != 0) {
            count++;
        }
        p++;
    }

    return count;
}

int main(){

    Contact v[] = {
        {1, "John Doe", 0},
        {2, "Mary Doe", 1},
        {3, "Richard Son", 1},
        {4, "Chris Jansem", 4},
        {5, "Terry Doe", 4},
        {6, "Jane Jansem", 4}
    };
    
    int res = find_by_name(6, v, "Doe");
    printf("qtde: %d\n", res);

    return 0;
}