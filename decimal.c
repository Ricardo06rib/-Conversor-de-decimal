/*
Autor: Ricardo Fernandes Ribeiro
Curso: Sistemas de Informação - 1 Período
Nome do projeto: Conversor de decimal
*/

#include<stdio.h>
#include<locale.h>

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

    setlocale(LC_ALL, "Portuguese");

   int decimal;

   printf("Digite um número decimal:");
   scanf("%d", &decimal);

   converteBinario(decimal);

   return 0;
}

