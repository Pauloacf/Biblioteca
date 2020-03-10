#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct livro {
   char nome[1000], autor[1000], isbn[1000];
   float preco; 
} livro;

void inserir_livro(){
    FILE *file;
    file = fopen("library.txt", "a");
    livro novo;
    printf("Digite o nome do livro:\n");
    getchar();
    scanf(" %s", novo.nome);
    fprintf(file, "%s\n", novo.nome);
    printf("Digite o nome do autor:\n");
    getchar();
    scanf(" %s", novo.autor);
    fprintf(file, "%s\n", novo.autor);
    printf("Digite o ISBN:\n");
    getchar();
    scanf(" %s", novo.isbn);
    fprintf(file, "%s\n", novo.isbn);
    printf("Digite o valor:\n");
    scanf("%f", &novo.preco);
    fprintf(file, "%.2f\n", novo.preco);
    fclose(file);
}

int main(){
    int option = 0;
    bool running = true;
    printf("        Menu\n 1 - Inserir livro.\n 2 - Remover livro.\n 3 - Procurar livro.\n 4 - Sair.\n");

    while(running){
        printf("Digite sua opção:\n");
        scanf("%d", &option);

        switch (option){
        case 1:
            inserir_livro();
            printf("1\n");
        
        case 2:
            printf("2\n");
            break;
        
        case 3:
            printf("3\n");
            break;
        
        case 4:
            running = false;
            break;

        default:
            printf("Opção inválida.\n");
            break;
        }
    }

}