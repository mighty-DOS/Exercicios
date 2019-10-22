#include <stdlib.h>
#include <stdio.h>

int main()
{
	int produto, i=1;
	do
	{
		printf("Menu de selecao de produtos \n");
		printf("Notebooks I5: 4GB.............HOTKEY[1] \n");
		printf("Notebooks I5: 8GB.............HOTKEY[2] \n");
		printf("Notebooks I7: 8GB.............HOTKEY[3] \n");
		printf("Notebooks I7: 16GB............HOTKEY[4] \n");
		scanf("%d", &produto);
		switch(produto)
		{
			case 1:
				printf("Valor R$2.7000,00 \n");
				break;
			case 2:
				printf("Valor R$3.070,00 \n");
				break;
			case 3:
				printf("Valor R$3.8000,00 \n");
				break;
			case 4:
				printf("Valor R$5.020,00 \n");
				break;
			default:
				printf("ERRO PRODUTO INESITENTE \n");
		}
		printf("Deseja verificar mais algum produto ? \n Sim [1] Nao[0] \n");
		scanf("%d", &i)	;
	}while(i>0);
	return 0;
}
