#include <stdio.h>
#include "matriz.h"
/*
    14.  Dizemos que uma matriz Anxn  é um quadrado latino de ordem n se em cada linha e em cada coluna aparecem todos os inteiros 1,2,3,...,n
    (ou seja, cada linha e coluna é permutação dos inteiros 1,2,...,n).
    Exemplo:
        {1 2 3 4}
        {2 3 4 1}
        {4 1 2 3}
        {3 4 1 2}

    A matriz acima é um quadrado latino de ordem 4.
    (a) Escreva uma função que recebe como parâmetros um inteiro n, um vetor V com n inteiros e verifica se em V ocorrem todos os inteiros de 1 a n.
    (b) Usando a função acima, verifique se uma dada matriz inteira Anxn   é um quadrado latino de ordem n.
*/
int perm(int *v, int n);
int temdigito(int *v, int n, int num);
int main(){
    int m, n;
    printf("Digite m e n: ");
    scanf("%d %d", &m, &n);
    int matriz[m][n];
    min(m, n, matriz);
    printf("Matriz digitada:\n");
    mout(m, n, matriz);
    
    for (int i = 0; i < m; i++){
        if(!perm(matriz[i], n)){
            printf("NAO E QUADRADO LATINO\n");
            return 0;
        }
    }
    printf("E QUADRADO LATINO\n");
    return 0;
}
int temdigito(int *v, int n, int num){
    int soma = 0;
    for (int i = 0; i < n; i++){
        if(v[i] == num){
            soma++;
        }
    }
    return soma;
}
int perm(int *v, int n){
    int j = 1;
    for (int i = 0; i < n; i++, j++){
        if(!temdigito(v, n, j)){
            return 0;
        }
    }
    return 1;
}