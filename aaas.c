#include <stdio.h>
#include<malloc.h>

int main()
{
	char **b;
	int n,c,i,j;
	scanf("%d%d",&r,&c);
	a=(char**)malloc(r*sizeof(char*));
	for(i=0;i<n;i++)
	{
		*(b+i)=(char*)malloc(c*sizeof(char));
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=c+1;j++)
		{
			scanf("%c",(*(a+i)+j));// input as welcome to zoho corporation
		}
	}
	
  	for(i=0;i<n;i++)
	{
		for(j=1;j<=c+1;j++)
		{
			printf("%c",*(*(b+i)+j));
		}
		printf("\n");
	}
	char s[3]="too";
	for(i=0;i<n;i++)
	{
		if((b[i]=='t')&&(b[i+1]=='o')&&(b[i+2]=='o'))
		{
		 printf("\nrow yes");	
		 printf("%d%d",i,i+2);
		}
		else
		    i++;
	}
	for(i=0;i<c;i++)
	{
		if((b[i]=='t')&&(b[i+1]=='o')&&(b[i+2]=='o'))
		{
		 printf("\ncol yes");	
		 printf("%d%d",i,i+2);
		}
		else
		    i++;
	}
	
return 0;
}
