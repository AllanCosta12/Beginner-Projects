#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, z, rep = 0;
    int y = 1;
do{
	printf("Digite qual tabuada voce quer\n");
	scanf("%i", &x);
	printf("Digite ate que numero voce quer que va a tabuda\n");
	scanf("%i", &z);

	system ("cls");
	printf ("\t\tTABUADA DO %i\n", x);

            for ( ; y <= z; ++y ){
                printf("%ix%i=%i\n", x, y, x*y);
            }

		printf("\t\tQuer ver outra tabuada?\n \t1-Sim\n \t2-Nao\n");
		scanf("%i", &rep);

			system ("cls");
			y = 1;

	}while(rep==1);

	return 0;
}
