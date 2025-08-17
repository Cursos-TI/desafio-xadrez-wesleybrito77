#include <stdio.h>


int main ()
{
// incio do jogo de xadrez  

//variaveis para movimentação da torre 
    int a=1;
    int casas;
    char sentido [20];

//logica de movimentação da torre utilizando a instrução de repetição while

printf(" bem vindos ao jogo de xadrez !!\n\n");
printf("por favor digite qual direção , para cima ou para baixo para a torre : ");
scanf("%s",sentido);
printf("por favor digite o numero de casas :");
scanf("%d",&casas);

printf("***********************************\n");

while (a<=casas){ 
printf("move %d casas para %s\n",a,sentido);      

      a ++;
         
    }

   
printf("\n\n");

//variaveis para movimentação do bispo

int b=1;
int casas_b;
char sentido_b [20];

//logica de movimentação do bispo utilizando a instrução de repetição do-while

printf("digite o sentido em diagonal para o bispo, direita ou esquerda :");
scanf("%s",sentido_b);

printf("agora digite o numero de casas :");
scanf("%d",&casas_b);

do{ printf("move %d casas para %s e %d para cima\n",b,sentido_b,b);

    b ++;
}
while (b<=casas_b);

printf("\n\n");

printf("***********************************\n");

//variaveis de movimentação da rainha
int casas_c;
char sentido_c [20];


//logiga de movimentação da rainha utilzando a instrução de repetição for 

printf("digite o sentido de movimento para rainha :");
scanf("%s",sentido_c);
printf("agora digite quantas casas devem se mover a rainha :");
scanf("%d",&casas_c);

for (int c = 1; c <= casas_c; c++)
{
   printf("move %d  casas para %s\n",c,sentido_c);
}

printf("\n\n");

printf("***********************************\n");

  // final da movimentação no jogo 
  
    return 0;
}