#include <stdio.h>
#include <stdlib.h>

int main()
{
system("color 9E");
printf(" *     /$$$$$$$  /$$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$                  \n");
printf(" *    | $$__  $$| $$__  $$ /$$__  $$ /$$__  $$ /$$__  $$ /$$__  $$                 \n");
printf(" *    | $$  \\ $$| $$  \\ $$| $$  \\ $$| $$  \\__/| $$  \\ $$| $$  \\__/           \n");
printf(" *    | $$  | $$| $$$$$$$/| $$  | $$| $$ /$$$$| $$$$$$$$|  $$$$$$                  \n");
printf(" *    | $$  | $$| $$__  $$| $$  | $$| $$|_  $$| $$__  $$ \\____  $$                \n");
printf(" *    | $$  | $$| $$  \\ $$| $$  | $$| $$  \\ $$| $$  | $$ /$$  \\ $$              \n");
printf(" *    | $$$$$$$/| $$  | $$|  $$$$$$/|  $$$$$$/| $$  | $$|  $$$$$$/                 \n");
printf(" *    |_______/ |__/  |__/ \\______/  \\______/ |__/  |__/ \\______/               \n");
printf(" *                                                                                 \n");
printf(" *                                                                                 \n");
printf(" *                                                                                 \n");
printf(" *     /$$$$$$$$ /$$   /$$ /$$$$$$$  /$$$$$$$  /$$$$$$$$  /$$$$$$   /$$$$$$        \n");
printf(" *    | $$_____/| $$  / $$| $$__  $$| $$__  $$| $$_____/ /$$__  $$ /$$__  $$       \n");
printf(" *    | $$      |  $$/ $$/| $$  \\ $$| $$  \\ $$| $$      | $$  \\__/| $$  \\__/   \n");
printf(" *    | $$$$$    \\  $$$$/ | $$$$$$$/| $$$$$$$/| $$$$$   |  $$$$$$ |  $$$$$$       \n");
printf(" *    | $$__/     >$$  $$ | $$____/ | $$__  $$| $$__/    \\____  $$ \\____  $$     \n");
printf(" *    | $$       /$$/\\  $$| $$      | $$  \\ $$| $$       /$$  \\ $$ /$$  \\ $$   \n");
printf(" *    | $$$$$$$$| $$  \\ $$| $$      | $$  | $$| $$$$$$$$|  $$$$$$/|  $$$$$$/      \n");
printf(" *    |________/|__/  |__/|__/      |__/  |__/|________/ \\______/  \\______/      \n");
                                                                   

	int idade, i=1;
	float valor;
	do
	{
		printf("Entre a idade do cliente \n");
		scanf("%d", &idade);
		printf("Entre o valor da compra \n");
		scanf("%f", &valor);
		if(idade>=60)
		{
		
			printf("O total a se pagar sera de R$%.02f \n", valor*0.30);
		}
		else
		{
			printf("O total a se pagar sera de R$%.02f \n", valor*0.10);
		}
		printf("Deseja realizar mais uma compra? Sim[1] Nao[0] \n");
		scanf("%d", &i);
	}while(i>0);
	
	
	
	return 0;
}
