#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    float x;
    float y;
} Point;

void random_points(int n, Point v[]){
    for(int i = 0; i < n -1; i++){
        v[i].x = rand()/(float)RAND_MAX * 100.0f - 50.0f;
        v[i].y = rand()/(float)RAND_MAX * 100.0f - 50.0f;
        printf("%.2f %.2f ", v[i].x, v[i].y);
    }
    printf("\n");
}

int main(){

    Point v[10] = {0};
    random_points(8, v);

    return 0;
}