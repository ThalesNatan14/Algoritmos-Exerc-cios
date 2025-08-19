#include <stdio.h>

struct point {
    float x;
    float y;
};

int main(){
    struct point Point;
    Point.x = 5.12345;
    Point.y = 8.37485; 

    printf("Ponto X: %.2f\n Ponto Y: %.2f\n", Point.x, Point.y);

    return 0;
}