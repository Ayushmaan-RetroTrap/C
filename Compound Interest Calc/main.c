#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0f;
    float rate = 0.0;
    double n = 0.0;
    int time = 0;
    double amount = 0.0;
    double formula;

    printf("Enter the Principal Amount(in Rs.): ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest(in %%age): ");
    scanf("%f", &rate);

    printf("Enter the number of times the interest is compounded annually: ");
    scanf("%lf", &n);

    printf("Enter the number of years: ");
    scanf("%d", &time);

    formula = 1 + (rate/(n*100));
    
    amount = principal * pow(formula, n*time);

    printf("Your Interest after %d year/s will be Rs.%.2lf",time, amount);

    return 0;
}