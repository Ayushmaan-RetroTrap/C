#include <stdio.h>

int main() {
    
    //SHOPPING CART PROGRAM

    char item[50] = "" ;
    float price = 0.0f;
    int q = 0;
    float total = 0.0f;

    printf("What item do you want to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("Price for each item?(in Rs.): ");
    scanf(" %f", &price);

    printf("Quantity of the item?: ");
    scanf(" %d", &q);

    total = q * price;

    printf("Total of the selected item: %.3f\n", total);

    printf("Your list has %d %s\n", q , item);

    return 0;
}