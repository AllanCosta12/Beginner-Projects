#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op, rep =1;
    float x , y = 0;


        do{
            printf ("\t\t\t\tTabuada\n");
            printf (" 1- Soma \n 2- Subtracao \n 3- Multiplicacao \n 4- Divisao\n\n");
            scanf ("%i", &op);

    switch (op){

            case 1:
            printf ("\tDigite o primeiro numero a ser somado: ");
            scanf ("%f", &x);
            printf ("\tDigite o segundo numero a ser somado: ");
            scanf ("%f", &y);
            printf ("\n\t\t O resultado da soma dos numeros e: %.2f\n", x + y);
            break;
            case 2:
            printf ("\tDigite o primeiro numero a ser subtraido: ");
            scanf ("%f", &x);
            printf ("\tDigite o segundo numero a ser subtraido: ");
            scanf ("%f", &y);
            printf ("\n\t\t O resultado da subtracao dos numeros e: %.2f\n", x - y);
            break;
            case 3:
            printf ("\tDigite o primeiro numero a ser multiplicado: ");
            scanf ("%f", &x);
            printf ("\tDigite o segundo numero a ser multiplicado: ");
            scanf ("%f", &y);
            printf ("\n\t\t O resultado da multiplicacao dos numeros e: %.2f\n", x * y);
            break;
            case 4:
            printf ("\tDigite o primeiro numero a ser dividido: ");
            scanf ("%f", &x);
            printf ("\tDigite o segundo numero a ser dividido: ");
            scanf ("%f", &y);
            printf ("\n\t\t O resultado da divisao dos numeros e: %.2f\n", x / y);
            break;

    default:
                printf ("\t\t\tDigite um numero valido\n");
        }
        system ("pause");
        system("cls");

    printf ("\t\tDeseja fazer outra conta");
    printf ("\n 1- SIM \n 2- NAO\n");
    scanf ("%i", &rep);
    system ("cls");

        }while (rep ==1);
    return 0;
}
