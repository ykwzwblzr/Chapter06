/*这是一个多行注释
*
*FileName: T6_42.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The distance
*/
#include <iostream>
#include<cmath>
using namespace std;
double distance(double x1,double x2,double y1,double y2);
int main()
{  double x1;
double x2;
double y1;
double y2;
cin>>x1>>y1>>x2>>y2;
cout<<distance( x1, x2, y1, y2);

    return 0;
}
double distance(double x1,double x2,double y1,double y2)
{  double a;
   a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
   return a;
}
