
#include <iostream>


using namespace std;

typedef struct User {
    int id;
    string nome;
    double saldo;
} User;


void sacarSaldo(User &usuario, double valor){
    usuario.saldo -= valor;
}

void consultarSaldo(const User &usuario){
    printf("Saldo: %.2f\n", usuario.saldo);
}

void depositarSaldo(User &usuario, double valor){
    usuario.saldo += valor;
}


int main(){

    int op = 0;
    double valor;

    User usuario;
    usuario.id = 443;
    usuario.nome = "Deivao";
    usuario.saldo = 5000;

    while(op != 4){
        printf("Menu do caixa:\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar valor na conta\n");
        printf("3. Retirar valor da conta\n");
        printf("4. Sair\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                consultarSaldo(usuario);
                break;

            case 2:
                printf("Qual valor vai ser o depósito: ");
                scanf("%lf", &valor);
                depositarSaldo(usuario, valor);
                break;

            case 3:
                printf("Qual valor vai ser retirado: ");
                scanf("%lf", &valor);
                sacarSaldo(usuario, valor);
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }
    }
}