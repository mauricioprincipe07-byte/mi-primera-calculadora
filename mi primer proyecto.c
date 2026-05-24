#include <stdio.h>

int main() {
    float num1, num2, suma, resta, multi, divi;
    
    printf("dame el primer numero: ");
    scanf("%f", &num1);
    
    printf("dame el segundo numero: ");
    scanf("%f", &num2);
    
    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;
    
    printf("la suma es : %f\n", suma);
    printf("resta es : %f\n", resta);
    printf("multi es : %f\n", multi);
    printf("divi es : %f\n", divi);
    
    return 0;
}
