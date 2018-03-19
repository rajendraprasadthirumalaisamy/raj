#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char a[20],b[20];int i,j;
cout<<"enter the string:";
cin>>a>>b;
i=strlen(a);
j=strlen(b);
if(i==j)
{
    cout<<"anagram";
}
else
{
    cout<<"not anagram";
}
}
