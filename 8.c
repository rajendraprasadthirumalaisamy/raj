#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	int j;
	scanf("%[^\n]s",name);
		printf("%s\n",name);
	name[0]=name[0]-32;
	for(j=0;name[j]!='\0';j++)
	{
		if(name[j]==' ')
	{j++;
	name[j]=name[j]-32;}
	}
	printf("%s",name);
		
}
