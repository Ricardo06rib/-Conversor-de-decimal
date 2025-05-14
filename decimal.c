/*
Autor: Ricardo Fernandes Ribeiro
Curso: Sistemas de Informa��o - 1 Per�odo
Nome do projeto: Conversor de decimal
*/

#include<stdio.h>

void converteBinario (int dec)
{

    int resto[8], i = 0;

    while (dec >= 1)
    {

        resto[i++] = dec % 2;
        dec = dec / 2;

    }
    while (i > 0)
    {

        printf("%d", resto[--i]);

    }
}


int main ()
{

   int decimal;

   printf("Digite um n�mero decimal:");
   scanf("%d", &decimal);

   converteBinario(decimal);

   return 0;
}

