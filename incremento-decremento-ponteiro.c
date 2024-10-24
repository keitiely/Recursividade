/*13- Implemente uma função que receba um número inteiro por
referência e realize dois cálculos diferentes: incremente o
valor em 1 e depois decremente o valor em 2. Retorne o resultado
de cada operação por referência.
Entrada: Um número inteiro.
Saída: O valor incrementado em 1 e o valor decrementado em 2 (via ponteiros).*/

#include <stdio.h>
void incrementarDecrementar(int *valor, int *incrementado, int *decrementado){
    int aux = *valor;
    *incrementado = ++(*valor);
    *decrementado = aux-=2;
   
}

int main(){
    int num, i, d;
   
    printf("Digite um numero: ");
    scanf("%d", &num);
   
    incrementarDecrementar(&num, &i, &d);
    printf("Incremento: %d\n", i);
    printf("Decremento em 2: %d\n", d);
   
}
