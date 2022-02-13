#include <stdio.h>

#define TAMANHO_NOME_DO_CLIENTE 100

struct cliente {
    char nome [TAMANHO_NOME_DO_CLIENTE];
    int idade;
};

struct filme {
    int classificacao_filme;
    int esta_disponivel;
};

int main(void) {
    struct cliente erick;
    struct filme megamente;

    printf("informe o nome do cliente: ");

    fflush(stdin);
    fgets (erick.nome, TAMANHO_NOME_DO_CLIENTE, stdin);
    
    printf("informe a idade do cliente: ");
    scanf("%d", &erick.idade);

    printf("informe a classificação do filme: ");
    scanf("%d", &megamente.classificacao_filme);

     printf("\n Informe (0) se o filme não está disponível e (1) caso contrário: ");
    scanf("%d", &megamente.esta_disponivel);

    printf("\n Cliente: %s", erick.nome);
    printf("\n Idade: %d anos", erick.idade);
    printf("\n Classificação do filme: %d anos", megamente.classificacao_filme);
    printf("\n Está disponível: %d", megamente.esta_disponivel);
    printf("\n Filme pode ser locado pelo cliente: %d", (megamente.esta_disponivel) && (erick.idade >= megamente.classificacao_filme));
    printf("\n Anos restantes: %d", (erick.idade < megamente.classificacao_filme) * (megamente.classificacao_filme - erick.idade));
};