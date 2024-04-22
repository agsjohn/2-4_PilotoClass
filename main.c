#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigo;
    do{
        printf("Digite o número de classificação do piloto: ");
        scanf("%i", &codigo);
        getchar();
        while(codigo < 0){
            printf("Código inválido, digite novamente: ");
            scanf("%i", &codigo);
            getchar();
        }
        if(codigo != 0){
            switch(codigo){
            case 1:
            case 2:
                printf("Primeira fila");
                break;
            case 3:
            case 4:
                printf("Segunda fila");
                break;
            case 5:
            case 6:
                printf("Terceira fila");
                break;
            case 7:
            case 8:
                printf("Quarta fila");
                break;
            case 9:
            case 10:
                printf("Quinta fila");
                break;
            }
            if(codigo > 10){
                printf("Sexta fila em diante");
            }
          printf("\n\n");
        }
    }while(codigo != 0);
  printf("\n");
  printf("Finalizando o programa");
  getchar();
}
