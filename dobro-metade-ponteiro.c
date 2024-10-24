/*16-Implemente uma função que receba um número real (float)
por referência e calcule o dobro e a metade desse número.
Retorne os resultados por referência.
Entrada: Um número real.
Saída: O dobro e a metade do número (via ponteiros).*/

#include <stdio.h>
void calcularDobroMetade(float *num, float *dobro, float *metade){
     *dobro = (*num) * 2;
     *metade = (*num)/2;
     
}

int main(){
    float a, d, m;
    printf("Digite um numero: ");
    scanf("%f", &a);
    
    calcularDobroMetade(&a, &d, &m);
    printf("\nO Dobro de %.2f e: %.2f\nA metade de %.2f e: %.2f", a, d, a, m);

    return 0;
}
