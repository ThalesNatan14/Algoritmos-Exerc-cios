#include <stdio.h>
#include <math.h>

typedef struct point{
    float x;
    float y;
} Point;

void distance_vector(int n, Point v[]){
    for(int i = 0; i < n -1; i++){
        float dx = v[i+1].x - v[i].x;
        float dy = v[i+1].y - v[i].y;
        float distance = sqrt(dx * dx + dy * dy);
        printf("A distancia entre o ponto %d e %d: %.2f\n", i, i+1, distance);
    }
}


int main(){

    Point pontos[] = {
        {0.0f, 0.0f},
        {3.0f, 4.0f},
        {6.0f, 8.0f},
        {10.0f, 10.0f}
    };
    int n = sizeof(pontos) / sizeof(pontos[0]);
    distance_vector(n, pontos); 

    return 0;
}