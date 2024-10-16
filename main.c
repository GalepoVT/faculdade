#include <stdio.h>

int main() {
    int filme, quantidade, idade, i;
    float total = 0;
    
    // Preço do ingresso
    float preco_inteiro = 30.50;
    float meia_entrada = 15.25;

    // Exibir as opções de filmes
    printf("Escolha o filme:\n");
    printf("1 - É assim que acaba\n");
    printf("2 - Deadpool e Wolverine\n");
    printf("3 - Divertidamente 2\n");
    printf("4 - Armadilha\n");
    
    // Solicitar a escolha do filme
    printf("Digite o número do filme escolhido: ");
    scanf("%d", &filme);
    
    // Verificar se a escolha é válida
    if (filme < 1 || filme > 4) {
        printf("Opção de filme inválida!\n");
        return 1;
    }
    
    // Solicitar a quantidade de ingressos
    printf("Digite a quantidade de ingressos: ");
    scanf("%d", &quantidade);
    
    // Calcular o total baseado na idade de cada pessoa
    for (i = 0; i < quantidade; i++) {
        printf("Digite a idade do %dº espectador: ", i + 1);
        scanf("%d", &idade);
        
        // Verificar se a pessoa paga meia entrada
        if (idade < 10 || idade > 65) {
            total += meia_entrada;
        } else {
            total += preco_inteiro;
        }
    }
    
    // Mostrar o nome do filme escolhido
    printf("Filme escolhido: ");
    if (filme == 1) {
        printf("É assim que acaba\n");
    } else if (filme == 2) {
        printf("Deadpool e Wolverine\n");
    } else if (filme == 3) {
        printf("Divertidamente 2\n");
    } else if (filme == 4) {
        printf("Armadilha\n");
    }
    
    // Exibir o valor total
    printf("Valor total: R$ %.2f\n", total);
    
    return 0;
}
