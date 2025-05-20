#include <stdio.h>
int main(){
int opcao;
printf("Menu principal\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("Escolha uma opção:\n");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
        printf("Iniciando o jogo...\n");
        break;
    case 2:
        printf("Abrindo regras...\n");
        printf("1. Regra 1\n");
        printf("2. Regra 2\n");
        printf("3. Regra 3\n");
        break;
    case 3:
        printf("Encerrando...\n");
        break;

    default:
        printf("Comando inválido. Tente novamente\n");
        break;
}
return 0;








}