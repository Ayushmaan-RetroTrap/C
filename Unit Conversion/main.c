#include <stdio.h>

int main(){

    int choice = 0;
    float m = 0.0f;
    float cm = 0.0f;

    printf("Unit Conversion Program\n1. Meters to Centimeters\n2. Centimeters to Meters\n");
    printf("Choose any one of the options to continue(1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        //Meters to Centimeters

        printf("Enter the number: ");
        scanf("%f", &m);

        m = m * 100;

        printf("%.2f Centimeters", m);
    }    
    else if (choice == 2){
        //Centimeters to Meters

        printf("Enter the number: ");
        scanf("%f", &cm);

        cm = cm / 100;

        printf("%.2f Meters", cm);
    }
    else{
        printf("Invalid Choice");
    }
    

    return 0;
}