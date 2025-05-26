#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159;
    double volume = 0.0;
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    volume = 4/3 * PI * pow(radius, 3);

    printf("The AREA of the circle is: %.2lf\n", area);
    printf("The VOLUME of the circle is: %.2lf\n", volume);

    return 0;
}