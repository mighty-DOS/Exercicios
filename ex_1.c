#include<stdio.h>
#include<stdlib.h>


int main()
{
system("color 6c");
printf("  ____                                             _   _ _               \n");
printf(" |  _ \\                                           | | (_) |             \n");
printf(" |  _ \\                                           | | (_) |             \n");
printf(" | |_) |_   _  ___  _ __     __ _ _ __  _ __   ___| |_ _| |_ ___         \n");
printf(" |  _ <| | | |/ _ \\| '_ \\   / _` | '_ \\| '_ \\ / _ \\ __| | __/ _ \\  \n");
printf(" | |_) | |_| | (_) | | | | | (_| | |_) | |_) |  __/ |_| | || (_) |       \n");
printf(" |____/ \\__,_|\\___/|_| |_|  \\__,_| .__/| .__/ \\___|\\__|_|\\__\\___/ \n");
printf("                                 | |   | |                               \n");
printf("                                 |_|   |_|                               \n");
	
	int  pessoa, i=1;
	float quilo;

	do
	{
		printf("Escolha o Buffe Livre[1] ou Quilo[0] \n");
		scanf("%d", &pessoa);
		if(pessoa==1)
		{
			printf("Total a pagar R$39,90 \n");
		}
		else if(pessoa==0)
		{
			printf("Entre o peso do prato em gramas \n");
			scanf("%f", &quilo);
			printf("O Total a pagar R$%.02f ", (quilo*4.10));	
		}
		else
		{
			printf("Erro escolha outro tipo de pagamento \n");
		}
		printf("Deseja fazer mais alguma compra? Sim[1] Não[0] \n");
		scanf("%d", i);
	}while(i>0);
	
	
	return 0;
}
