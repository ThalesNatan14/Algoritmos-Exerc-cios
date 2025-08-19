#include <stdio.h>

int find_sequence(int n1, int v1[], int n2, int v2[]){
    int i = 0, j = 0, seq = 0;
    while(i < n1){
        if(v1[i] == v2[0]){
            v2[j++];
            if(v2[j] == n2){
                return 1;
            }else {
                v1[i--];
            }
        }
        i++;
    }
    if(v1[i] == n1 && v2[j] < n2){
        v2[j++];
    }
    if(v1[i] < n1 && v2[j] == n2){
        v1[i++];
    }
    return 0;
    
}

int main(){

    int vet1[] = {2, 5, 8, 15, 29, 45, 3, 6, 56, 21};
    int vet2[] = {5, 8, 45, 56};
    int res = find_sequence(10, vet1, 4, vet2);
    printf("%d\n", res);

    return 0;
}