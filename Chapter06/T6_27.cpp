/*这是一个多行注释
*
*FileName: T6_27.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The smallest
*/
#include <iostream>
double tw(double a,double b,double c);
using namespace std;
int main()
{   double a;
    double b;
    double c;
    cout<< tw( a,b,c);
    return 0;
}
double tw(double a,double b,double c)
{    cin>>a>>b>>c;
    double d;
  d=a<b?(a<c?a:c):(b<c?b:c);
  return d;


}
