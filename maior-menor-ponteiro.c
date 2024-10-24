/*15- Escreva uma função que receba dois números inteiros por referência
e retorne o maior e o menor desses dois números por referência.
Entrada: Dois números inteiros.
Saída: O maior e o menor número (via ponteiros).*/

#include <stdio.h>
void comparar(int *a, int *b, int *maior, int *menor){
   *maior = *a;
   *menor = *b;
   
    if(*b > *a){
        *maior = *b;
        *menor = *a;
    }
}
int main(){
    int num1, num2, x, y;
   
    printf("Digite dois numeros separados por espaco: ");
    scanf("%d %d", &num1, &num2);
   
    comparar(&num1, &num2, &x, &y);
    printf("o maior numero e: %d\n", x);
    printf("o menor numero e: %d\n", y);
}
