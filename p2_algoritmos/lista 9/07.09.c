#include <stdio.h>

typedef struct contact{
    int id;
    char name[51];
} Contact;

void print_contacts(int n, Contact* v){
    for(int i = 0; i < n; i++){
        printf("{%d, %s}\n", v->id, v->name);
        v++;
    }
    printf("\n");
}

int main(){
    Contact v[] = {
        {1, "Um"},
        {2, "Dois"},
        {3, "Tres"},
        {4, "Quatro"},
        {5, "Cinco"},
        {6, "Seis"},
        {7, "Sete"},  
    };
    print_contacts(7, v);
    return 0;
}