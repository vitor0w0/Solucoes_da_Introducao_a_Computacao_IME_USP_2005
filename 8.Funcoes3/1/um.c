#include <stdio.h>
/**
    1 - (POLI 94) Um conjunto pode ser representado por um vetor da seguinte forma: V[0] é o tamanho do conjunto;
    V[1], V[2], etc. são os elementos do conjunto (sem repetições).
  
    (a) Faça uma função chamada intersecção que dados dois conjuntos de números inteiros A e B, constrói um terceiro conjunto C
    que é a intersecção de A e B. Lembre-se de que em C[0] a sua função deve colocar o tamanho da intersecção.

    (b) Faça um programa que lê um inteiro n >= 1 e uma seqüência de n conjuntos de números inteiros (cada um com no máximo 100 elementos)
    e constrói e imprime um vetor INTER que representa a intersecção dos n conjuntos.
    Por exemplo, se n=3 e os conjuntos são {1, 2, 4, 9}, {2, 4, 7, 8, 9} e {5, 4, 9}, a entrada será:
    3	O valor de n
 	 
    4	V[0] = tamanho do primeiro conjunto
    1 2 4 9	V[1]  V[2]  V[3]  V[4]
 	 
    5	V[0] = tamanho do segundo conjunto
    2 4 7 8 9	V[1]  V[2]  V[3]  V[4]  V[5]
 	 
    3	V[0] = tamanho do terceiro conjunto
    5 4 9	V[1]  V[2]  V[3]

    E o vetor INTER construído será
    INTER[0] = 2	 	tamanho do conjunto
    INTER[1] = 4	INTER[2] = 9	conjunto intersecção
    NOTE que não é preciso ler todos os conjuntos de uma só vez. Você pode ler os dois primeiros conjuntos e calcular a primeira intersecção.
    Depois, leia o próximo conjunto e calcule uma nova intesecção entre esse conjunto lido e o conjunto da intersecção anterior, e assim por diante.
 */
void vin(int *p, int n);
void vout(int *v);
void intersec(int *a, int *b, int *c);
int main(){
    int x;
    scanf("%d", &x);
    int len;
    printf("conjunto 1: ");
    scanf("%d", &len);
    int a[len+1];
    vin(a, len);

    if(x==1){
        vout(a);
        return 0;
    }

    printf("Conjunto 2: ");
    scanf("%d", &len);
    int b[len+1];
    vin(b, len);
    int inter[100];
    intersec(a, b, inter);

    if(x == 2){
        printf("Interseccao dos n elementos: ");
        vout(inter);
        return 0;
    }
    
    for (int i = 3; i <= x; i++){
        printf("Conjunto %d: ", i);
        scanf("%d", &len);
        int a[len+1];
        vin(a, len);
        
        int aux[100]; 
        for (int j = 0; j <= inter[0]; j++)
            aux[j] = inter[j];
        
        intersec(a, aux, inter);
    }
    printf("Interseccao dos n elementos: ");
    vout(inter);
    return 0;
}
void intersec(int *a, int *b, int *c){
    int k = 1;
    for (int i = 1; i <= a[0]; i++){
        for (int j = 1; j <= b[0]; j++){
            if(a[i] == b[j]){
                c[k] = a[i];
                k++;
            }
        }
    }
    c[0] = k-1;
}
void vin(int *p, int n){
    for (int i = 1; i <= n; i++)
        scanf("%d", &p[i]);

    p[0] = n;
}
void vout(int *v){
    for (int i = 0; i <= v[0]; i++)
        printf("%d ", v[i]);
    putchar('\n');
}