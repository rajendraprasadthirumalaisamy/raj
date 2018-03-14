#include <stdio.h>

#include <string.h>
void main()
{
     char str[20],t;
     int i;
    
     printf("\nEnter a string : ");
     scanf("%s",str);
if(str=="saturday" || str=="sunday")
{
    printf("holiday");
}
else
{
    printf("working day");
}
    
}
