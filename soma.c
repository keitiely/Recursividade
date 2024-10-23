#include <stdio.h>

unsigned soma(int num1, int num2){
            return num1+num2;
}
int main(){
    int x, y;
    
        printf("Digite um numero para calcular soma:\nDigite o primeiro numero: ");
        scanf("%d", &x);
        printf("Digite o segundo numero: ");
        scanf("%d", &y);
    
        printf("A soma e: %d", soma(x, y));
    return 0;
}
