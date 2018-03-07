#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    for(i=2;i<5;i++)
    {
        if(a%i==0)
        {
            cout<<i;
            cout<<"prime";
        }
       
    }
    
}
