// Taking co-ordinates of 2-dimensional points as inputs from the user and print the distance between these two points

#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    double distance, final_distance;

    printf("Enter Co-ordinates for Point-1:\n ");
    scanf("%d %d", &x1, &y1);

    printf("Enter Co-ordinates for Point-2:\n ");
    scanf("%d %d", &x2, &y2);

    distance = ((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));

    final_distance = sqrt(distance);

    printf("Distance between two points : %lf",final_distance );

}