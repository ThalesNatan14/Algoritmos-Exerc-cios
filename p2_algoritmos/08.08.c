#include <stdio.h>
#include <limits.h>

typedef struct employee {
char name[50];
float salary;
int type; // 0- Developer, 1- Designer, 2- Manager, 3- Support
} Employee;

void print_best3(int n, Employee v[n]){
    float max = 0.0;
    float intr = 0.0;
    float min  = 0.0;
    for(int i = 0; i < n; i++){
        if(v[i].salary > max){
            min = intr;
            intr = max;
            max = v[i].salary;
        } else if(v[i].salary > intr){
            min = intr;
            intr = v[i].salary;
        } else if(v[i].salary > min){
            min = v[i].salary;
        }
    }
    printf("Max:%f\nMin: %f\nInter: %f\n", max, min, intr);
}

int main() {

    Employee v[] = {
        {"Blue Mary", 1590.00, 1},
        {"Barry Burton", 1334.30, 3},
        {"Charlie Nash", 1387.50, 2},
        {"Chris Redfield", 1275.60, 0}
    };

    print_best3(4, v);

    return 0;
}