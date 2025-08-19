#include <stdio.h>
//questão 11 da lista 09;

/*typedef struct Product { 
    int id;           // identificador do produto 
    int stock;        // estoque do produto 
    char name[101];   // nome do produto 
} Product;

void check_stock(int n1, const Product* prods, int* n2, int* orders){
    *n2 = 0;
    Product* p1 = prods;
    for(int i = 0; i < n1; i++){
        if(p1-> stock <= 0){
            add(n2, orders, p1->id);
        }
        p1++;
    }
}

void add(int* n, int* v, int* value){
    for(int i = 0; i < n; i++){
        if(value == *v){
            return;
        }
        v++;
    }
    *v = value;
    *n++;
}

int main(){



    check_stock();

    return 0;
}*/

//questão 01 p2

/*void sum_avg(int* v, int* sum, float* avg){
    int *p = v;
    int count = 0;
    while(*p != -1){
        *sum += *p;
        p++;
        count++;
    }
    *avg = *sum / count;

    printf("soma: %d\n", *sum);
    printf("Media: %.2f\n", *avg);
}

int main(){

    int vet[] = {6,2,3,4,5,-1};
    int res = 0;
    float med = 0;
    sum_avg(vet, &res, &med);

    return 0;
}*/

//questão 02 p2

/*typedef struct employee {
 char name[51];
 float wage; // salário
 int type; // número que indica o tipo do funcionário
 } Employee;

float wage_avg(Employee* emp, int n, int type){
    Employee *p = emp;
    int count = 0;
    float sum = 0;
    for(int i = 0; i < n; i++){
        if(p->type == type){
            sum += p->wage;
            count++;
        }
        p++;
    }
    return sum / count;

}

int main(){

    Employee vet[] = {
        {"John Davies", 1790.80, 7},
        {"John Davies", 1476.15, 5},
        {"John Davies", 1358.80, 5},
        {"John Davies", 1523.65, 5},
        {"John Davies", 1487.90, 6},
        {"John Davies", 1245.50, 5},
    };

    float res = wage_avg(vet, 6, 5);
    printf("%.2f\n", res);

    return 0;
}*/

//questão 03 p2

/*int sum_of_sides(int n, int v[n][n]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                sum += v[i][j];
            }
        }
    }
    return sum;
}

int main(){

    int vet[4][4] = { 
        { 1, 2, 3, 4,},
        { 5, 6, 7, 8,},
        { 1, 7, 0, 2,},
        { 9,10,11,12 }
    };

    int res = sum_of_sides(4, vet);
    printf("soma: %d\n", res);

    return 0;
}*/

// questão 12 da lista 07

/*void switch_diagonals(int d, int m1[d][d]){
    int temp = 0;
    for(int i = 0; i < d; i++){
        temp = m1[i][i];
        m1[i][i] = m1[i][d-1-i];
        m1[i][d-1-i] = temp;
    }
}

void print_matrix(int rows, int cols, int m3[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%2d ", m3[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int mat[3][3] = {
        {1, 2, 3},  
        {4, 5, 6},
        {7, 8, 9}
    };
    switch_diagonals(3, mat);
    print_matrix(3, 3, mat);

    return 0;
}*/

typedef struct contact{
    int id;
    char name[51];
    char email[71];
    int type;
} Contact;

void print_contact(Contact c, int n, char type_names[n][50]){
    printf("id: %d\nname: %s\nemail: %s\ntype: %s\n", c.id, c.name, c.email, type_names[c.type]);
}

int main(){

    char types[5][50] = {"Familia", "Amigos", "Trabalho", "Escola", "Outros"};
    Contact c = {1, "Jhon Doe", "jhondoe@email.com", 2};
    print_contact(c, 5, types);

    return 0;
}

