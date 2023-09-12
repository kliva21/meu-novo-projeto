#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int i;
    setlocale(LC_ALL, "Portuguese");
    int ct1, ct2, ct3, ca1, ca2, nc, npr, na, nota;
    float ca, cc, nf;
    char c;

    do {
        printf("\n\n");
        printf("\tA\t-\tclassificacao do trimestre \n\tB\t-\tclassificacao do ciclo\n\tC\t-\tNota final com recurso\n\t0\t-\tSair do Programa\n\n\n");

        printf("Escolha a sua opinao: ");
        scanf(" %c", &c);
        if (nota>=0 $$ nota<=20){
        	else{
        		printf("nota invalida")
			}
		

        switch (c)
        {
        case 'a':
        case 'A':
            printf("digite o valor de ct1: ");
            scanf("%d", &ct1);

            printf("digite o valor de ct2: ");
            scanf("%d", &ct2);

            printf("digite o valor de ct3: ");
            scanf("%d", &ct3);

            ca = 0.30 * ct1 + 0.35 * ct2 + 0.35 * ct3;
            printf("valor de ca e %f", ca);
            break;

        case 'b':
        case 'B':
            printf("Insira o valor da classificacao do ano 1: ");
            scanf("%d", &ca1);
            printf("Insira o valor da classificacao do ano 2: ");
            scanf("%d", &ca2);
            cc = (0.45 * ca1) + (0.55 * ca2);
            printf("O valor da sua classificacao de ciclo e %f", cc);
            break;

        case 'c':
        case 'C':
            printf("insira o valor de na: ");
            scanf("%d", &na);
            printf("insira o valor de npr: ");
            scanf("%d", &npr);
            printf("insira o valor de nc: ");
            scanf("%d", &nc);
            
            nf = (0.40 * (na / nc)) + (0.6 * npr);
            printf("valor de nf eh %f", nf);
            break;
			
            

        default:
            printf("Letra invalida.\n");
            return 0;
            break;
        }
    }

	

    } while (c != '0');

    return (0);
}


