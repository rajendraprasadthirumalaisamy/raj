#include<iostream>
using namespace std;
int main()
{
    int a,f=1;
    cout<<"enter the number";
    cin>>a;
    if(a<=0)
    {
        cout<<"1";
        
    }
    else
    {
        for(int i=1;i<=a;i++)
        {
            f=f*i;
            
        }
    } cout<<f;
}
