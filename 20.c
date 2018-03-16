#include<stdio.h>
int main()
{
	char a[30],s;
	int i,l;
	printf("Enter the String:");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		s=a[i]+3;
		printf("%c",s);
	}
	return 0;
}
