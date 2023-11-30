#include <stdio.h>
    int main() {
    int resposta;
    int pontuacao = 0;

    printf("BEM-VINDO AO QUIZ!\n\n");

    // PERGUNTA 1
    printf("PERGUNTA 1: QUAL É A CAPITAL DO BRASIL?\n");
    printf("1. RIO DE JANEIRO\n");
    printf("2. SÃO PAULO\n");
    printf("3. BRASÍLIA\n");
    printf("ESCOLHA A OPÇÃO CORRETA (1, 2 OU 3): ");
    scanf("%d", &resposta);

    if(resposta == 3){
        printf("Resposta correta! Você ganhou ponto!\n");
        pontuacao++;
    }
    else {
        printf("Resposta incorreta! A resposta correta é Brasília!\n");
    }
}