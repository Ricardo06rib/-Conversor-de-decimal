/*
Autor: Ricardo Fernandes Ribeiro
Curso: Sistemas de Informação - 1 Período
Nome do projeto: Conversor de decimal
*/

#include<stdio.h>
#include<locale.h>

void converteHexadecimal (int dec)
{

    printf("\nHexadecimal: ");

    int resto[8], i = 0;

    while (dec >= 1)
    {

        resto[i++] = dec % 16;
        dec = dec / 16;

    }

    while (i > 0)
    {
        if (resto[i-1] >= 10)
        {
            printf("%c", 55 + resto[--i]);
        } else
        {
            printf("%d", resto[--i]);
        }
    }
}


void converteBinario (int dec)
{

    printf("\nBinário: ");

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

void converteOctal (int dec)
{

    printf("\nOctal: ");

    int resto[8], i = 0;

    while (dec >= 1)
    {

        resto[i++] = dec % 8;
        dec = dec / 8;

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

   printf("Digite um número decimal: ");
   scanf("%d", &decimal);

   converteBinario(decimal);
   converteOctal(decimal);
   converteHexadecimal(decimal);

   return 0;
}

