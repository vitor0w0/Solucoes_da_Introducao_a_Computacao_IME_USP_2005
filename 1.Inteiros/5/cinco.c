#include <stdio.h>

/**
* 5 - Uma loja de discos anota diariamente durante o mês de abril a quantidade de discos vendidos. Determine em que dia desse mês ocorreu a maior
*  venda e qual foi a quantidade de discos vendida nesse dia. Para isso, seu programa deve ler uma sequência de 30 valores inteiros,
*  que correspondem à quantidade de discos vendidos a cada dia do mês.
  Em seguida, se programa deve escrever o dia em que houve a maior venda e a quantidade de discos vendidos nesse dia.
 */
int main(void) {
    int qtd, maior=-1, dia = 0;
    for (int i = 1; i <= 30; i++) {
        scanf("%d", &qtd);
        if (qtd > maior) {
            maior = qtd;
            dia = i;
        }
    }
    printf("O maior valor foi de %d, no dia %d\n", maior, dia);
    return 0;
}