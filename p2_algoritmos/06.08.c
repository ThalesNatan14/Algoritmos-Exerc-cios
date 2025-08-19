#include <stdio.h>

typedef struct contact{
    int id;
    char name[51];
    char email[71];
    int type;
} Contact;

void print_contact(Contact c, int n, char type_names[n][50]){
    if(c.type >= 0 && c.type < n){
        printf("%d, %s, %s, %s\n", c.id, c.name, c.email, type_names[c.type]);
    } else {
        printf("%d, %s, %s, Tipo invalido\n", c.id, c.name, c.email);
    }
    printf("\n");
}

int main(){

    char types[5][50] = {"Familia", "Amigos", "Trabalho", "Escola", "Outros"};
    Contact c = {1, "Jhon Doe", "jhondoe@email.com", 2};
    print_contact(c, 5, types);

    return 0;
}