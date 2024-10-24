/*14- Implemente uma função que receba um número inteiro por referência
e retorne o número de divisores inteiros positivos desse número.
Use ponteiros para retornar o resultado.
Entrada: Um número inteiro.
Saída: A quantidade de divisores do número (via ponteiro).*/

#include <stdio.h>
void contarDivisores(int *num, int *totalDivisores){
    *totalDivisores=0;
    for(int i=1; i <= *num; i++)
        if(*num % i == 0)
            (*totalDivisores)++;
    
}

int main(){
    int num, total;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    contarDivisores(&num, &total);
    printf("O total de divisores de %d e: %d", num, total);

    return 0;
}
