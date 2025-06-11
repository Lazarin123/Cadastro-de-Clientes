#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"

void abertura() {
    printf("*******************************************\n");
    printf("**Seja bem-vindo ao cadastro de clientes!**\n");
    printf("*******************************************\n");
}

void escolha() {
    printf("Escolha a Opção desejada:\n");
    printf("1 - Cadastrar Cliente\n");
    printf("2 - Listar Clientes\n");
    printf("3 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);
}

int main () {
    opcao;
    abertura();
    escolha();
    escolhas();

    printf("Obrigado por usar o sistema de cadastro de clientes!\n");
}