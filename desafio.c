#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct livro {
   char nome[1000], autor[1000];
   long long int isbn;
   float preco; 
} livro;

void inserir_livro(livro *nome, livro *autor, livro *isbn, livro *preco){
    FILE *file;
    fopen("livros.txt", "a");
    fprintf(file, nome, "\n");
    fprintf(file, autor, "\n");
    fprintf(file, isbn, "\n");
    fprintf(file, preco, "\n");
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
            livro teste;
            teste.nome;
            teste.autor;
            strcpy(teste.nome, "Fundamentos de Sistemas Operacionais");
            strcpy(teste.autor, "Silberschatz");
            teste.isbn = 9788521617471;
            teste.preco = 250.0;
            inserir_livro(teste.nome, teste.autor, teste.isbn, teste.preco);
            printf("1\n");
            break;
        
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