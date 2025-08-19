#include <stdio.h>

 typedef struct employee {
 char name[51];
 float wage; // salário
 int type; // número que indica o tipo do funcionário
 } Employee;

float wage_avg(Employee* emp, int n, int type){
    Employee *p = emp;
    float sum = 0;
    int t = 0;
    for(int i = 0; i < n; i++){
        if(p->type == type){
            sum += p->wage;
            t++;
        }
        p++;
    }
    return sum / t;
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
}