#include<stdio.h>
void main()
{
    int a;int b;
    scanf("%d",&a);
   
    while (a!=0)
    {
        
        b=a%10;
        a=a/10;
         printf("%d",b);
    } 
}
