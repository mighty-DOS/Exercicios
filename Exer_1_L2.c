#include <stdio.h>
#include <stdlib.h>

int main()
{
	int  dia, opc, i=0;
	float preco, precoT, precoM;
	do
	{
		printf("Entre o preço da entrada hoje \n");
		scanf("%f", &precoT);
		printf("Entre o dia da semana \n [1]Segunda \n [2]Ter%ca \n [3]Quarta \n [4]Quinta \n [5]Sexta \n [6]Sabado \n [7]Domingo \n", 135);
		scanf("%d", &dia);
		printf("%c dia de musica ao vivo ? \n [0]Sim \n [1]N%co", 144, 198);
		scanf("%d", &opc);
		switch(dia)
		{
			case 1 :
				if(opc == 0)
				{
					preco = precoT;
					precoM = precoT;
					preco = preco*0.25;
					precoM = precoT*1.15;
					precoT = precoM - preco;
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				else
				{
					preco = precoT;
					preco = precoT - (preco*0.25);
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				break;
			case 2 :
				if(opc == 0)
				{
					preco = precoT;
					precoM = precoT;
					preco = preco*0.25;
					precoM = precoT*1.15;
					precoT = precoM - preco;
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				else
				{
					preco = precoT;
					preco = precoT - (preco*0.25);
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				break;
			case 3 :
				if(opc == 0)
				{
					precoM = precoT;
					precoM = precoM*1.15;
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoM);
				}
				else
				{
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				break;
			case 4 :
				if(opc == 0)
				{
					preco = precoT;
					precoM = precoT;
					preco = preco*0.25;
					precoM = precoT*1.15;
					precoT = precoM - preco;
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				else
				{
					preco = precoT;
					preco = precoT - (preco*0.25);
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				break;
			case 5 : 
				if(opc == 0)
				{
					precoM = precoT;
					precoM = precoM*1.15;
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoM);
				}
				else
				{
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				break;
			case 6:
				if(opc == 0)
				{
					precoM = precoT;
					precoM = precoM*1.15;
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoM);
				}
				else
				{
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				break;
			case 7:
				if(opc == 0)
				{
					precoM = precoT;
					precoM = precoM*1.15;
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoM);
				}
				else
				{
					printf("Pre%co da entrada sera R$%.2f \n", 135 , precoT);
				}
				break;
			default :
				printf("ERRO DIA INVALIDO \n");
		}
		printf("Deseja entrar um novo calculo de pre%co ? \n [0]Sim \n [1]N%co", 135, 198);
		scanf("%d");
	}while(i==0);
	
	
	return 0;
}
