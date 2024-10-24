10- Com ponteiros, 1000x1 não é necessariamente 1001!
Qual será a saída do código abaixo?
#include <stdio.h>
void main(void) {
    char   *a = (char *) 0x1000;
    int    *b = (int *) 0x1000;
    float  *c = (float *) 0x1000;
    double *d = (double *) 0x1000;
    printf("%p %p %p %p", a+1, b+1, c+1, d+1 );
}
A saída é a soma do endereço 0x1000 com o tamanho de cada tipo de variável.
Para o char, o incremento é de 1 byte, então o valor será 0x1001. 
Para o int, o incremento é de 4 bytes, resultando em 0x1004. 
O float também ocupa 4 bytes, portanto a saída será 0x1004 novamente.
Já o double ocupa 8 bytes, então a saída será 0x1008.
