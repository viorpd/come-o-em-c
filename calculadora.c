#include <stdio.h>
#include <stdlib.h>
#define ID_VALIDO 1234
#define SENHA_VALIDA 4321
#define SALDO_INICIAL 800.00
// Função para realizar o login do usuário
int login() {
  int id, senha, tentativas = 3;
  while (tentativas > 0) {
    printf("Digite seu ID: ");
    scanf("%d", &id);
    printf("Digite sua senha: ");
    scanf("%d", &senha);
    if (id == ID_VALIDO && senha == SENHA_VALIDA) {
      printf("Login realizado com sucesso!\n");https://replit.com/@vvpadilha/av2?v=1
      return 1; // Login bem-sucedido
    } else {
      printf("ID ou senha incorretos. Tente novamente.\n");
      tentativas--;
    }
  }
  printf("Número máximo de tentativas excedido. Sistema encerrado.\n");
  return 0; // Login falhou
}
// Função para exibir o menu principal
void menu() {
  printf("\nMenu de Operações:\n");
  printf("1. Depositar\n");
  printf("2. Sacar\n");
  printf("3. Exibir Saldo\n");
  printf("4. Sair\n");
  printf("Digite a opção desejada: ");
}
// Função para realizar o depósito
void depositar(float *saldo) {
  float valor;
  printf("Digite o valor do depósito: ");
  scanf("%f", &valor);
  *saldo += valor;
  printf("Depósito realizado com sucesso!\n");
}
// Função para realizar o saque
void sacar(float *saldo) {
  float valor;
  printf("Digite o valor do saque: ");
  scanf("%f", &valor);
  if (valor > *saldo) {
    printf("Saldo insuficiente!\n");
  } else {
    *saldo -= valor;
    printf("Saque realizado com sucesso!\n");
  }
}
// Função para exibir o saldo da conta
void exibirSaldo(float saldo) {
  printf("Seu saldo atual é: R$%.2f\n", saldo);
}
int main() {
  float saldo = SALDO_INICIAL;
  int opcao;
  if (login() == 1) {
    while (1) {
      menu();
      scanf("%d", &opcao);
      // Usando if-else para evitar break
      if (opcao == 1) {
        depositar(&saldo);
      } else if (opcao == 2) {
        sacar(&saldo);
      } else if (opcao == 3) {
        exibirSaldo(saldo);
      } else if (opcao == 4) {
        printf("Saindo do sistema...\n");
        return 0; // Sair do programa
      } else {
        printf("Opção inválida. Tente novamente.\n");
      }
    }
  }
  return 0;
}
