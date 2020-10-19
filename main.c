#include <stdio.h>
#include <stdlib.h>

int main()
{
     int dec = 0;
     float x,y,z,w,r,naluno1, naluno2 = 0;

    printf("\t\t\tO que deseja fazer?\n\n");
    printf (" 1- Calcular media de um aluno \n 2- Finalizar Programa\n");
    scanf ("%i", &dec);

    switch (dec){
    case 1:
        system("cls");
        printf ("Digite a primeira nota do aluno:\n");
        scanf ("%f", &x);
        printf ("Digite a segunda nota do aluno:\n");
        scanf ("%f", &y);
        printf ("Digite a terceira nota do aluno:\n");
        scanf ("%f", &z);
        printf ("Digite a quarta nota do aluno:\n");
        scanf ("%f", &w);
        r = (x+y+z+w)/4;

            if (r >=5){
                printf ("A media do aluno e: %.2f e ele foi aprovado", r);
            }else{
                printf ("A media do aluno e: %.2f e ele foi reprovado", r);
            }
         system("cls");
         printf("\t\t\tO que deseja fazer?\n\n");
         printf (" 1- Calcular media de um aluno \n 2- Comparar com outro aluno \n 3- Finalizar programa");
         scanf ("%i", &dec);

                switch (dec){
                case 1:
                        system("cls");
                        printf ("Digite a primeira nota do aluno:\n");
                        scanf ("%f", &x);
                        printf ("Digite a segunda nota do aluno:\n");
                        scanf ("%f", &y);
                        printf ("Digite a terceira nota do aluno:\n");
                        scanf ("%f", &z);
                        printf ("Digite a quarta nota do aluno:\n");
                        scanf ("%f", &w);
                        r = (x+y+z+w)/4;

                            if (r >=5){
                                printf ("A media do aluno e: %.2f e ele foi aprovado", r);
                                system ("pause");
                            }else{
                                printf ("A media do aluno e: %.2f e ele foi reprovado", r);
                                system ("pause");
                            }

                         system("cls");
                         printf("\t\t\tO que deseja fazer?\n\n");
                         printf (" 1- Calcular media de um aluno \n 2- Comparar com outro aluno \n 3- Finalizar programa");
                         scanf ("%i", &dec);
                         break;
                case 2:
                        r = naluno1;
                        system("cls");
                        printf ("Digite a primeira nota do aluno:\n");
                        scanf ("%f", &x);
                        printf ("Digite a segunda nota do aluno:\n");
                        scanf ("%f", &y);
                        printf ("Digite a terceira nota do aluno:\n");
                        scanf ("%f", &z);
                        printf ("Digite a quarta nota do aluno:\n");
                        scanf ("%f", &w);
                        naluno2 = (x+y+z+w)/4;

                            if (naluno1 > naluno2){
                                printf("A nota do primeiro aluno e maior: %f",naluno1);
                            }
                             if (naluno1 < naluno2){
                                printf("A nota do segundo aluno e maior: %f",naluno2);
                            }
                             if (naluno1 == naluno2){
                                printf("Os alunos tiveram desempenho igual: %f",naluno1);
                            }
                            break;
                case 3:
                    break;
                default:
                    printf ("digite algo valido");

                }
    }


    return 0;
}
