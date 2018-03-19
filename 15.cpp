#include<iostream>
using namespace std;
int main()
{
char a[20];int i,j;
cout<<"enter the string:";
cin>>a;
for(i=0;a[i]!='\0';i++)
{
for(j=1;a[i]!='\0';j++)
{
if(a[i]==a[j])
{
cout<<a[i];
}
}
}
}
