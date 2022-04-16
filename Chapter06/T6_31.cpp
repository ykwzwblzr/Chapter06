/*这是一个多行注释
*
*FileName: T6_31.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Greatest common divisor
*/
#include <iostream>
using namespace std;
void gcd(int a,int b);
int main()
{   int a;
  int b;
   cin>>a>>b;
   gcd(a,b);
    return 0;
}
void gcd(int a,int b)
{ int c;
c=a>b?a:b;
    for(int i=c;i>=1;i--)
   { if(a%i==0 && b%i==0)

      {cout<<i;
        break;}
   }

}
