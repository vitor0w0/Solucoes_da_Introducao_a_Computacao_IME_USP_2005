#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
    12 - (a) Escreva uma função que recebe como parâmetros uma matriz de caracteres NOMESmxn,
    os índices i e j de duas linhas e que troca os elementos da linha i com os da linha j.

    (b) Escreva uma função que recebe como parâmetros uma matriz NOMESmxn, os índices i e j de duas linhas e
    que devolve valor 1 se o nome na linha i é maior ou igual ao da linha j (ordem alfabética) e 0 caso contrário.

    (c) São dados n nomes que serão armazenados em uma matriz  NOMESmxn. Coloque os nomes dessa matriz em ordem alfabética usando as funções descritas acima.
*/
void scan(int m, int n, char[m][n]);
void print(int m, int n, char[m][n]);
void trocaLn(int n, char[][n], int i, char j);
void swap(char*, char*);
int imaiorqj(int n, char[][n], int i, int j);

int main(){
    int n =2;
    char NOMES[n][50];
    scan(n, 50, NOMES);
    if (imaiorqj(n, NOMES, 0, 1)){
        trocaLn(n, NOMES, 0, 1);
    }
    print(n, 50, NOMES);
    return 0;
}

int imaiorqj(int n, char NOMES[][n], int i, int j){
    int k = 0;
    while(NOMES[i][k] != '\0' && NOMES[j][k] != '\0'){
        if(isalpha(NOMES[i][k]) && isalpha(NOMES[j][k])){
            if(tolower(NOMES[j][k]) > tolower(NOMES[i][k])){
                return 0;
            } else if(tolower(NOMES[j][k]) < tolower(NOMES[i][k])){
                return 1;
            }
        }
        k++;
    }
    if(NOMES[i][k] == '\0')
        return 1;
    
    return 0;
}

void trocaLn(int n, char NOMES[][n], int i, char j){
    for (int k = 0; i < k; k++){
        swap(&NOMES[i][k], &NOMES[j][k]);
    }
}
void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void scan(int m, int n, char NOMES[m][n]){
    for (int i = 0; i < m; i++){
        fgets(NOMES[i], n, stdin);
        NOMES[i][strcspn(NOMES[i], "\n")] = '\0';
    }
}
void print(int m, int n, char NOMES[m][n]){
    printf("\n===Nomes===\n");
    for (int i = 0; i < m; i++){
        printf("%s\n", NOMES[i]);
    }
    printf("===========\n");
}