#include <stdio.h>
#include <math.h>
#include <limits.h>

typedef struct point{
    float x;
    float y;
} Point;

void nearest_points(int n, Point v[]){
    float min_dist = INT_MAX;
    int index1 = -1, index2 = 1;
    for(int i = 0; i < n -1; i++){
        float dx = v[i+1].x - v[i].x;
        float dy = v[i+1].y - v[i].y;
        float distance = sqrt(dx * dx + dy * dy);
        if(distance < min_dist){
            min_dist = distance;
            index1 = i;
            index2 =i+1;
        }
    }
    printf("v[%d] e v[%d] são os pontos mais proximos. Distancia = %.2f \n", index1, index2, min_dist);
}

int main(){

    Point v[] = {
        {0.0f, 0.0f},
        {3.0f, 4.0f},
        {6.0f, 8.0f},
        {10.0f, 10.0f}
    };
    
    int n = sizeof(v) / sizeof(v[0]);
    nearest_points(n, v);


    return 0;
}