#include <stdio.h>

typedef struct employee {
char name[50];
float salary;
int type; // 0- Developer, 1- Designer, 2- Manager, 3- Support
} Employee;

void income_report(int n, Employee v[n]){
    float sum = 0;
    float sum_type_0 = 0;
    float sum_type_1 = 0;
    float sum_type_2 = 0;
    float sum_type_3 = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    for(int i = 0; i < n; i++){
        sum += v[i].salary;
        if(v[i].type == 0){
            sum_type_0 += v[i].salary;
            j++;
        } else if(v[i].type == 1){
            sum_type_1 += v[i].salary;
            k++;
        } else if(v[i].type == 2){
            sum_type_2 += v[i].salary;
            l++;
        } else if(v[i].type == 3){
            sum_type_3 += v[i].salary;
            m++;
        }
    }
     // 0- Developer, 1- Designer, 2- Manager, 3- Support
    float media = sum / n;
    float m1 = sum_type_0 / j;
    float m2 = sum_type_1 / k;
    float m3 = sum_type_2 / l;
    float m4 = sum_type_3 / m;

    printf("Soma dos salarios: %.2f\n", sum);
    printf("A media dos salarios: %.2f\n", media);
    printf("Media por tipo\nDeveloper: %.2f\nDesigner %.2f\nManager: %.2f\nSupport: %.2f", m1, m2, m3, m4);
}

int main(){

    Employee v[] = {
        {"Blue Mary", 1590.00, 1},
        {"Barry Burton", 1334.30, 3},
        {"Charlie Nash", 1387.50, 2},
        {"Chris Redfield", 1275.60, 0},
        {"Jill Valentine", 1420.75, 1},
        {"Leon Kennedy", 1685.90, 0},
        {"Claire Redfield", 1310.60, 2},
        {"Albert Wesker", 1745.00, 3},
        {"Rebecca Chambers", 1255.45, 1},
        {"Carlos Oliveira", 1378.80, 0},
        {"Hunk", 1200.00, 2},
        {"Sherry Birkin", 1495.25, 3}
    };

    income_report(12, v);

    return 0;
}