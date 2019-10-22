#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
system("color 0A");	
printf(" *    :::::::::  :::::::::   ::::::::  :::    ::: ::::    ::: ::::::::::: \n");
printf(" *    :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:+:   :+:     :+:     \n");
printf(" *    +:+    +:+ +:+    +:+ +:+    +:+ +:+    +:+ :+:+:+  +:+     +:+     \n");
printf(" *    +#++:++#+  +#++:++#:  +#+    +:+ +#+    +:+ +#+ +:+ +#+     +#+     \n");
printf(" *    +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+  +#+#+#     +#+     \n");
printf(" *    #+#        #+#    #+# #+#    #+# #+#    #+# #+#   #+#+#     #+#     \n");
printf(" *    ###        ###    ###  ########   ########  ###    #### ########### \n");
	setlocale(LC_ALL, "Portuguese");
	int ensino, enem;
	float renda;

	printf("\n");
	printf("Porfavor informe se ja completou o ensino medio \n Sim[1] Não[0] \n");
	scanf("%d", &ensino);
	if(ensino==1)
	{
		printf("Informe sua nota do enem \n");
		scanf("%d", &enem);
		if(enem>=450)
		{
			printf("Entre sua renda familiar TOTAL em Salários Mínimos por pessoas \n");
			scanf("%f", &renda);
			if(renda<=1.5)
			{
				printf("Parabéns você se encaixa nos requesitos para se inscrever no PROUNI \n");
			}
			else
			{
				printf("Desculpe, mas é nescessario ter renda familiar menor ou igual a 1,5 para entrar no PROUNI \n");
			}
		}
		else
		{
			printf("Desculpe, mas é nescessario ter a nota do enem maior ou igual a 450 para entrar no PROUNI \n");
		}
	}
	else
	{
		printf("Desculpe, mas é nescessario ter o ensino médio completo para entrar no PROUNI \n");
		return 0;
	}
	return 0;	
}
