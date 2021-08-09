#include <stdio.h>
#include "operacoes.h"
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);

    /*
    (tipo_Retorno) (*nome_do_ponteiro) (lista_de_parametros)
    Links úteis: https://www.inf.pucrs.br/~pinho/PRGSWB/PonteirosParaFuncoes/PonteirosParaFuncoes.html
    https://www.youtube.com/watch?v=naNqY-3Tha4
    */
   
    int (*op1)(int,int);
    int (*op2)(int,int);
    op1=soma;
    op2=max;

    printf("Exemplo ponteiro de funcao 1\n");
    printf("Soma igual = %d\n",op1(a,b));
    printf("Max igual = %d\n\n",op2(a,b));

    printf("Exemplo ponteiro de funcao 2\n");
    printf("Soma igual = %d\n",executa(op1,a,b));
    printf("Soma igual = %d\n\n",executa(op2,a,b));

    printf("Exemplo ponteiro de funcao 3\n");
    printf("Soma igual = %d\n",executa(soma,a,b));
    printf("Soma igual = %d\n\n",executa(max,a,b));

    printf("\nUsando Math.pow\n");
    printf("2^4 = %.0lf",pow(2,4));
    
    return 0;
}