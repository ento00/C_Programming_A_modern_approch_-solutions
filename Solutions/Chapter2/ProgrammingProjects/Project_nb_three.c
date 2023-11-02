#include<stdio.h>



int main(void)
{
    float radius;

    printf("Enter the volume of the sphere: ");
    scanf("%f", &radius);

    printf("Sphere Volume = %f\n", 4.0f / 3.0f * 3.14f * radius * radius * radius);
    
    return 0;
} 
