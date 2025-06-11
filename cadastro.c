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

int escolhas() {
    if (opcao == 1) {
        
        char nome[50];
        char sobrenome[50];

        printf("Digite o nome e o sobrenome do(a) cliente: \n");
        scanf(" %s %s", &nome, &sobrenome);

        FILE* f;
        f = fopen("clientes.txt", "r+");

        if (f == NULL) {
            printf("Erro ao abrir o banco de dados.\n");
            exit(1);
        }
       
        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++;
        
        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d\n", qtd);

        fseek(f, 0, SEEK_END);
        fprintf(f, "%s %s\n", nome, sobrenome);

        fclose(f);

        printf("Cliente %s %s cadastrado com sucesso!\n", nome, sobrenome);

    } else if(opcao == 2) {
       
        FILE* f;
        f = fopen("clientes.txt", "r");

        if (f == NULL) {
            printf("Erro ao abrir o arquivo de clientes.\n");
            exit(1);
        }

        int qtd;
        fscanf(f, "%d", &qtd);

        printf("Listando Clientes...\n");
        printf("Total de clientes cadastrados: %d\n", qtd);

        fclose(f);

    } else {
        printf("Saindo do programa...\n");
        exit(0);
    }
}

int main () {
    opcao;
    abertura();
    escolha();
    escolhas();

    printf("Obrigado por usar o sistema de cadastro de clientes!\n\n");
}