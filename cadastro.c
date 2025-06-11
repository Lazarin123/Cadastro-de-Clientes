#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"

void abertura() {
    printf("*******************************************\n");
    printf("**Seja bem-vindo ao cadastro de clientes!**\n");
    printf("*******************************************\n");
}

int main () {
    opcao;
    abertura();
    escolha();
    escolhas();

    printf("Obrigado por usar o sistema de cadastro de clientes!\n");
}