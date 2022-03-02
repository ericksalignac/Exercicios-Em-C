#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mat [3] [5] = {
    1, 1, 1, 0 , -1,
    1, 1, 1, 1, 1,
    0, 0, -1, -1, -1
    };

    int opcao;
    int numVoo;
    int reservou;

    do
    {printf ("\n 1 -Reservar voo \n 2 -Sair \n\nInforme a opcao desejada: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1 :
        printf("\nInforme o numero do voo (1-3): ");
        scanf("%d", &numVoo);
        reservou = 0;
        if (numVoo >= 1 && numVoo <=3) {
            for(int i = 0; i<5 && reservou == 0; i++){
                if (mat [numVoo - 1] [i] == 0) {
                        reservou = 1;
                        mat [numVoo - 1] [i] = 1;
                    }
                
            }

            if (reservou == 1)
            {
                printf ("\nSeu voo foi reservado com sucesso!");
            } else {
                printf ("\nNao ha poltronas disponives nesse voo.");
            }
            
        } else  {printf("\nOpcao invalida");
        }
        break;
    
    case 2:
        printf("\nSaindo...");
        break;

    default:
        printf("\nOpcao invalida!");
    }
    } while (opcao !=2);
          return 0;
}
