#include <stdio.h>
#include <stdlib.h>


float notas()
{
	int i;
	float nota[3], medias;
    for(i=0;i<3;i++)
    {
        printf("Entre o valor da nota %d \n", i+1);
        scanf("%f", &nota[i]);
    }
    for(i=0;i<3;i++)
    {  
      medias = medias + nota[i];  
    }
    return (medias);
}



int main()
{
	float media;
	media = notas(media);
	media = media/3;
	if(media==0 || media <= 4.9)
	{
	    printf("Sua media foi %.1f e seu conceito foi D \n", media);
	}
    else if(media >= 5.0 || media <= 6.9)
    {
        printf("Sua media foi %.1f e seu conceito foi C \n", media);
    }
    else if(media >= 7.0 || media <= 8.9)
    {
        printf("Sua media foi %.1f e seu conceito foi B \n", media);
    }
    else if(media >= 9.0 || media == 10.0)
    {
    	printf("Sua media foi %.1f e seu conceito foi A \n", media);
    }

	return 0;
}
