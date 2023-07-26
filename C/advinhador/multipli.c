#include <stdio.h>

int main(){

    int num1, num2, result;

    printf("digite um numero inteiro entre 1 e 99: \n");
    scanf("%d", &num1);
    printf("digite outro numero inteiro entre 1 e 99: \n");
    scanf("%d", &num2);
    
    result = num1 * num2;
    printf("O resultado de %d x %d = %d", num1, num2, result);

}