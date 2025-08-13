#include <stdio.h>
#include <math.h>
int main(){
    int P = 0;
    int n = 0;
    int t = 0;
    float r = 0.0;
    float A = 0.0;
    printf("Enter principal amount (initial money): ");
    scanf("%d",&P);
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d",&n); 
    printf("Enter time in years: ");
    scanf("%d",&t);
    printf("Enter annual interest rate: ");
    scanf("%f",&r);
    r = r/100.0;
    A = P * pow((1+r/n),n*t);
    printf("Final Amount (A) = %.2lf\n", A);
    printf("Compound Interest = %.2lf\n", A - P);
   
    
    
    return 0;

    


}
