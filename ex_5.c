#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>


int detran()
{
	int i;
printf("    DDDDDDDDDDDDD      EEEEEEEEEEEEEEEEEEEEEETTTTTTTTTTTTTTTTTTTTTTTRRRRRRRRRRRRRRRRR                  AAA               NNNNNNNN        NNNNNNNN \n");
printf("    D::::::::::::DDD   E::::::::::::::::::::ET:::::::::::::::::::::TR::::::::::::::::R                A:::A              N:::::::N       N::::::N \n");
printf("    D:::::::::::::::DD E::::::::::::::::::::ET:::::::::::::::::::::TR::::::RRRRRR:::::R              A:::::A             N::::::::N      N::::::N \n");
printf("    DDD:::::DDDDD:::::DEE::::::EEEEEEEEE::::ET:::::TT:::::::TT:::::TRR:::::R     R:::::R            A:::::::A            N:::::::::N     N::::::N \n");
printf("      D:::::D    D:::::D E:::::E       EEEEEETTTTTT  T:::::T  TTTTTT  R::::R     R:::::R           A:::::::::A           N::::::::::N    N::::::N \n");
printf("      D:::::D     D:::::DE:::::E                     T:::::T          R::::R     R:::::R          A:::::A:::::A          N:::::::::::N   N::::::N \n");
printf("      D:::::D     D:::::DE::::::EEEEEEEEEE           T:::::T          R::::RRRRRR:::::R          A:::::A A:::::A         N:::::::N::::N  N::::::N \n");
printf("      D:::::D     D:::::DE:::::::::::::::E           T:::::T          R:::::::::::::RR          A:::::A   A:::::A        N::::::N N::::N N::::::N \n");
printf("      D:::::D     D:::::DE:::::::::::::::E           T:::::T          R::::RRRRRR:::::R        A:::::A     A:::::A       N::::::N  N::::N:::::::N \n");
printf("      D:::::D     D:::::DE::::::EEEEEEEEEE           T:::::T          R::::R     R:::::R      A:::::AAAAAAAAA:::::A      N::::::N   N:::::::::::N \n");
printf("      D:::::D     D:::::DE:::::E                     T:::::T          R::::R     R:::::R     A:::::::::::::::::::::A     N::::::N    N::::::::::N \n");
printf("      D:::::D    D:::::D E:::::E       EEEEEE        T:::::T          R::::R     R:::::R    A:::::AAAAAAAAAAAAA:::::A    N::::::N     N:::::::::N \n");
printf("    DDD:::::DDDDD:::::DEE::::::EEEEEEEE:::::E      TT:::::::TT      RR:::::R     R:::::R   A:::::A             A:::::A   N::::::N      N::::::::N \n");
printf("    D:::::::::::::::DD E::::::::::::::::::::E      T:::::::::T      R::::::R     R:::::R  A:::::A               A:::::A  N::::::N       N:::::::N \n");
printf("    D::::::::::::DDD   E::::::::::::::::::::E      T:::::::::T      R::::::R     R:::::R A:::::A                 A:::::A N::::::N        N::::::N \n");
printf("    DDDDDDDDDDDDD      EEEEEEEEEEEEEEEEEEEEEE      TTTTTTTTTTT      RRRRRRRR     RRRRRRRAAAAAAA                   AAAAAAANNNNNNNN         NNNNNNN \n");
	for(i=0;i<4;i++)
	{
		system ("color 1E");
		sleep(1);
		system ("color 2D");
		sleep(1);
		system("color 69");
		sleep(1);
		system("color 02");
	}
	system("cls");
}
int main()
{
	int i=1, idade, aula, exm, testep, exo, tested;
	setlocale(LC_ALL, "Portuguese");
	detran();
	do
	{
		printf("\n");
		printf("\n");
		printf("Informe sua idade \n");
		scanf("%d", &idade);
		if(idade >= 18)
		{
			printf("Informe se completou todas as horas de aula \n Sim[1] N�o[0] \n");
			scanf("%d", &aula);
			if(aula==1)
			{
				printf("Informe se passou no exame m�dico \n Sim[1] N�o[0] \n");
				scanf("%d", &exm);
				if(exm==1)
				{
					printf("Informe se passou no teste psicot�cnico \n Sim[1] N�o[0] \n");
					scanf("%d", &testep);
					if(testep==1)
					{
						printf("Informe se passou no exame oftalmol�gico \n Sim[1] N�o[0] \n");
						scanf("%d", &exo);
						if(exo==1)
						{
							printf("Informe se passou no teste de dire��o \n Sim[1] N�o[0] \n");
							scanf("%d", &tested);
							if(tested==0)
							{
								printf("Voc� esta apto a dirigir parab�ns e lembresse do cinto de seguran�a \n");
							}
							else
							{
								printf("� necess�rio ter passado no teste de dire��o \n");
							}
						}
						else
						{
							printf("� necess�rio ter passado no exame oftalmol�gico \n");
						}
					}
					else
					{
						printf("� necess�rio ter passado no teste psicot�cnico \n");
					}
				}
				else
				{
					printf("� necess�rio ter passado nos exames m�dicos \n Sim[1] N�o[0] \n");
				}
			}
			else
			{
				printf("� necess�rio completar todas as horas de aula \n");
			}
		}
		else
		{
			printf("Desculpe voc� n�o tem a idade necess�ria \n");
		}
		printf("Informe se deseja fazer outro teste \n Sim[1] N�o[0] \n");
		scanf("%d", &i);
		system("cls");
	}while(i>0);
	
	return 0;
}
