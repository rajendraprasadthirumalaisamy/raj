#include <iostream>
#include<math.h>
int main()
{
    int a,b; int s=0;
    int c,d;
    std::cin >> a;
    std::cin >> b;
    c=pow(a,a);
    std::cout << c << std::endl;
    d=pow(b,2);
    std::cout << d << std::endl;
   
    s=c+d;
    std::cout << s << std::endl;
}
