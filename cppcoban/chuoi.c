#include <stdio.h>
#include <string.h>

int main()
{
    char chuoi[10000];
    int i,c=0;
    gets(chuoi);
	if (strlen(chuoi)>100)
	{	printf("N");
		return 0;
	}
	for (i = 0; i < strlen(chuoi); i++)
    {
       	if (chuoi[i] == ' ')
		c++;
	}
	if (c==0)
	{	
		printf("N");
		return 0;
	}
	else
		
		for (i = 0; i < strlen(chuoi); i++)
        {
            if (chuoi[i] == ' ')
				printf("\n");
            else printf ("%c",chuoi[i]);
        }
    }



