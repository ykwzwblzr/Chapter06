/*这是一个多行注释
*
*FileName: T6_26.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Temperature conversion
*/
#include <iostream>
#include<iomanip>
using namespace std;
double celsius(double a);
double fahrenheit(double b);
int main()
{   double a,b;
    celsius(a);
    cout<<endl<<endl;
    fahrenheit(b);
    return 0;
}
double celsius(double a)
{   cout<<"0-100之间的摄氏温度对应的华氏温度"<<endl;
     for(int i=0;i<=100;i++)
   {  a=1.0*double(i)*1.8+32;
      cout<<a<<setw(10);

   }
}
double fahrenheit(double b)
{  cout<<"32-212之间的华氏温度对应的摄氏温度"<<endl;
for(int j=32;j<=212;j++)
   {   b=1.0*double((j-32))/1.8;
      cout<<b<<setw(15);

   }
}
