#include <stdio.h>
/**
 * 11 - (FEA 85) Deseja-se atualizar as contas correntes dos clientes de uma agência bancária.
 *  É dado o cadastro de n clientes contendo para cada cliente o número de sua conta e o seu saldo;
 *  o cadastro está ordenado pelo número da conta. Em seguida, é dado o número de operações efetuadas no dia e,
 *  para cada operação, o número da conta, uma letra C ou D indicando se a operação é de crédito ou débito e o valor da operação.
 *  Emitir o cadastro de clientes atualizado.
*/

int main(){
    int n;
    scanf("%d", &n);
    double cad[n][2];
    for (int i = 0; i < n; i++)
    {
        printf("===Cadastro %d===\n", i+1);
        printf("Numero da conta: ");
        scanf("%lf", &cad[i][0]);
        printf("Saldo da conta: ");
        scanf("%lf", &cad[i][1]);
    }
    int op;
    printf("Quantas operacoes no dia: ");
    scanf("%d", &op);
    for (int i = 0; i < op; i++){
        
    }
    //TODO
    return 0;
}