/*12- Escreva uma função que receba três números
inteiros por referência e troque seus valores de forma cíclica: 
o valor do primeiro vai para o segundo, o valor do segundo vai para o terceiro,
e o valor do terceiro vai para o primeiro.
Entrada: Três inteiros.
Saída: Os valores trocados cíclicamente.*/

#include <stdio.h>
void trocarCiclicamente(int *a, int *b, int *c){
    int aux = *a;
     *a = *c;
     *c = *b;
     *b = aux;
}

int main(){
    int num1, num2, num3;
    printf("Digite tres numeros separados por espacos: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("\nNumeros digitados: %d %d %d", num1, num2, num3);
    
    trocarCiclicamente(&num1, &num2, &num3);
    printf("\nNumeros trocados:  %d %d %d", num1, num2, num3);

    return 0;
}
