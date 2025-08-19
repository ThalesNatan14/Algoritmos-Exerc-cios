#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pessoa{
    long id;
    char nome[51];
} Pessoa;

void print_pessoa(Pessoa p){
     printf("id:...%ld \n", p.id);
    printf("nome:..%s \n", p.nome);
    printf("\n");
};

Pessoa create_random() {
    Pessoa p;
    p.id = rand() % 100 + 1;
    char nome[51];
    sprintf(p.nome, "Jhon Doe %ld", p.id);
    
    return p;
}

int main(){

    Pessoa p1 = {7, "Lucas Da Silva"};
    
    Pessoa p2 = p1;

    Pessoa v[10];

    for(int i = 0; i < 10; i++){
        v[i] = create_random();
        print_pessoa(v[i]);
    }

    p1.id = 12;
    strcpy(p1.nome, "Antonio");
    strcat(p1.nome, " Mendes");
    print_pessoa(p1);
    p2 = p1;
    p2 = (Pessoa){2, "Maria Santos"};
    print_pessoa(p2);
    Pessoa p3 = create_random();
    print_pessoa(p3);
    
    return 0;
}