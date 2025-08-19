#include <stdio.h>
#include <math.h>

struct point{
    float x;
    float y;
};
typedef struct point Point;

float distance2D(Point p1, Point p2){
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);    
    
}

int main(){

    Point p1 = {-2.0f, 7.5f};
    Point p2 = {5.0f, 12.4f};
    float dist = distance2D(p1, p2);
    printf("Distancia = %.2f\n", dist);

    return 0;
}