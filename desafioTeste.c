#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

typedef struct book{
    char name[90];
    char author[90];
    char isbn[90];
    float price;
}book;

book addBook(){
    book new;
    printf("Digite o nome do livro:\n");
    getchar();
    scanf(" %s", new.name);
    printf("Digite o nome do autor:\n");
    getchar();
    scanf(" %s", new.author);
    printf("Digite o ISBN:\n");
    getchar();
    scanf(" %s", new.isbn);
    printf("Digite o valor:\n");
    scanf("%f", &new.price);
    return new;
}

int main(){

    bool running = true;

    book bookArray[10];
    FILE *archive;
    archive = fopen("library.dat", "rb");
    if (archive == NULL){
        printf("Erro ao abrir arquivo.\n");
        running = false;
    }
    int sizeB = 0;
    fread(bookArray, sizeof(book), 10, archive);
    fclose(archive);
    printf("%.2f\n", bookArray[0].price);
    printf("%.2f\n", bookArray[1].price);
    int option = 0;
    printf("        Menu\n 1 - Inserir livro.\n 2 - Remover livro.\n 3 - Procurar livro.\n 4 - Sair.\n");

    int len = sizeof(bookArray)/sizeof(book);
    printf("%d\n", len);

    while(running){
        printf("Digite sua opção:\n");
        scanf("%d", &option);

        switch (option){
        case 1:
            /*printf("1\n");*/
            bookArray[sizeB] = addBook();
            sizeB++;
            /*printf("%s\n%s\n%s\n%02.2f\n", bookArray[0].name, bookArray[0].author, bookArray[0].isbn, bookArray[0].price);*/
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
            running = false;
            break;
        }
    }
    archive = fopen("library.dat", "wb");
    fwrite(bookArray, sizeof(book), 10, archive);
    fclose(archive);
    printf("!\n");

}