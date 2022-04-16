/*这是一个多行注释
*
*FileName: T6_19.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The hypotenuse
*/
#include <iostream>
#include<cmath>
using namespace std;
double hypotenuse(double a,double b);
int main()
{   double a,b;
    for(int i=1;i<=3;i++)
    {   cin>>a>>b;
        cout<<hypotenuse( a,b)<<endl;}
    return 0;
}
double hypotenuse(double a,double b)
{ double c;
  c=sqrt(a*a+b*b);
  return c;
}
