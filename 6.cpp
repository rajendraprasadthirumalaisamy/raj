#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[12],b[12];int c,d;
    std::cin >> a>>b;
c= strlen (a);
d= strlen (b);
cout<<c<<endl<<d;
if(c!=d)
{
    std::cout << "not a isometric" << std::endl;
}
else
{
    std::cout << "isometric" << std::endl;
}
}
