#include <stdio.h>
#include "operacoes.h"

int soma(int a, int b){
    return a+b;
}

int max(int a, int b){
    return a>b ? a:b;
}

int executa(int (*pt)(int,int),int a, int b){
    return pt(a,b);
}