#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[12]="aab";
    char b[12]="aab";
    int n,m,i,j;
    std::cout << a<<endl<<b << std::endl;
    n=strlen(a);
    m=strlen(b);
     std::cout << n<<endl<<m << std::endl;
   for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
           if(i==j)
            {
                std::cout << "yes" << std::endl;
            }
            else
            {
                std::cout << "no" << std::endl;
            
            }
         }
    }
}
