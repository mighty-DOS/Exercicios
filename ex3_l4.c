#include <stdio.h>
#include <stdlib.h>

int main()
{
	int horai, horaf, mini, minf, horat, mint, total;
	printf("Entre o valor usando o padrao 24 horas \n");
	printf("Entre a hora do inicio do jogo \n");
	scanf("%d", &horai);
	printf("Entre os minutos do incio do jogo \n");
	scanf("%d", &mini);
	printf("Entre a hora final do jogo \n");
	scanf("%d", &horaf);
	printf("Entre os minutos finais do jogo \n");
	scanf("%d", &minf);
	if(horai == 0)
	{
		horai = 24;
	}
	else if(horaf == 0)
	{
		horaf = 24;
	}
	else if(horai < horaf)
	{
		horat = horaf - horai;
		horat = horat*60;
	}
	else if(horaf < horai)
	{
		horai = 24 - horai;
		horat = horaf - horai;
		horat = horat*60;
	}
	else if(horaf == horai)
	{
		horat = 0;
	}
	printf("\n");
	if(mini < minf)
	{
		mint = minf - mini; 
	}
	else if(mini > minf)
	{
	 	minf = minf + 60;
	 	mint = minf - mini;
	}
	else if(mini == minf)
	{
		mint = 0;
	}
	total = horat+mint;
	printf("O total de tempo decorrido em minutos foi de %d \n", total);
	return 0;
}

