#include <stdio.h>
#include <stdbool.h>

int main(){

    int option = 0;
    bool running = true;
    printf("        Menu\n 1 - Inserir livro.\n 2 - Remover livro.\n 3 - Procurar livro.\n 4 - Sair.\n");

    while(running){
        printf("Digite sua opção:\n");
        scanf("%d", &option);

        switch (option){
        case 1:
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