#include<stdio.h>

int main(){
    float height, radius, Surfacearea;

    printf("Enter the radius of the cylinder: \n");
    scanf("%f",&radius);

    printf("Enter the height of the cylinder: \n");
    scanf("%f", &height);
 
    Surfacearea = 2 *3.14159  *radius *radius + 2 * 3.14159  *radius *height;

    printf("radius=%.2f\n height=%.2f\n Surfacearea=%.2f\n ", radius, height, Surfacearea);


}
