#include <stdio.h>

void main() {

  // inicio do programa
  // variaveis
  float analise, ciencia, logica, media_aluno, media_final;
  char lixo; // Variável para armazenar entrada inválida
  // codigo das notas
  printf("Digite a nota de Analise: ");
  scanf("%f", &analise);
  printf("Digite a nota de Ciencias: ");
  scanf("%f", &ciencia);
  printf("Digite a nota de Lógica: ");
  scanf("%f", &logica);
  ;
  // começando a fazer o calculo da media
  media_aluno = (analise + ciencia + logica) / 3;
  // media de que o aluno tirou nas materias
  media_final = media_aluno;
  // media final do aluno
  printf("A media do aluno foi: %.2f", media_final);

  if (scanf("%f", &analise) != 1) { // Verifica se a entrada é um número válido
    printf("Nota inválida!\n");
    while ((lixo = getchar()) != '\n')
      ; // Limpa o buffer de entrada
  }     // Add closing curly brace here
  // Encerra o programa

  printf("Digite a nota de Ciencias: ");
  if (scanf("%f", &ciencia) != 1)
    printf("Nota inválida!\n");
  while ((lixo = getchar()) != '\n')
    ;

  printf("Digite a nota de Lógica: ");
  if (scanf("%f", &logica) != 1)
    printf("Nota inválida!\n");
  while ((lixo = getchar()) != '\n')
    ;
}
