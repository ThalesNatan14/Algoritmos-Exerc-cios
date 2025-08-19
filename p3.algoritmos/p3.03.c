#include <stdio.h>
#include <stdlib.h>

//(int*)* m alocação de matrizes

typedef struct{
    char nome[51];
    int next;
} Entity;

void print(const char* path){
    Entity e = {"", 0};
    FILE* file = fopen(path, "r");
    if(!file) return 0;
    while(e.next != -1){
        fssek(file, sizeof(Entity)*e.next, SEEK_SET);
        fread(&e, sizeof(Entity), 1, file);
        printf("%s", e.nome);
    }
    

}

int main(){


    return 0;
}
