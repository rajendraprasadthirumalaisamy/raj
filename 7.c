#include <stdio.h>
#include <string.h>
void main()
{
     char str[20],t;
     int i;
     printf("\nEnter a string : ");
     scanf("%s",str);
     printf("\nOriginal String     : %s",str);
     for(i=0;i<strlen(str);i=i+2){
     t = str[i];
     str[i] = str[i+1];
     str[i+1] = t;
     }
     printf("\nAfter Swap String      : %s",str);
    
}
