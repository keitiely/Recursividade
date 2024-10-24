11- Operadores de adição e subtração com ponteiros e inteiros. Mostre as saídas do código abaixo:

#include <stdio.h>
void main(void) {
    int *p = (int *) 0x1000;
   p++;  printf("%p ", p );
   p-=3; printf("%p ", p );
   p+=2; printf("%p ", p );
   p--;  printf("%p ", p );
}

O ponteiro p começa em 0x1000 e é incrementado, movendo-se para 0x1004. Em seguida,
é decrementado por 3, indo para 0x0FF8, depois incrementado por 2 para voltar a 0x1000.
Finalmente, é decrementado por 1, resultando em 0x0FFC. A saída será: 0x1004 0xff8 0x1000 0xffc.
