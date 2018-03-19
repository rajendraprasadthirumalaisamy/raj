#include <stdio.h>
#include<string.h>
int main(void) {
	char b[57];
	int i,n;
	scanf("%s",b);
	n=strlen(b);
	
	
	for(i=n-1;i>=0;i--)
	{
	if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
	{
		
	}
	else
	{
		printf("%c",b[i]);
	}
	}
	
}
