/*����һ������ע��
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
{   cout<<"0-100֮��������¶ȶ�Ӧ�Ļ����¶�"<<endl;
     for(int i=0;i<=100;i++)
   {  a=1.0*double(i)*1.8+32;
      cout<<a<<setw(10);

   }
}
double fahrenheit(double b)
{  cout<<"32-212֮��Ļ����¶ȶ�Ӧ�������¶�"<<endl;
for(int j=32;j<=212;j++)
   {   b=1.0*double((j-32))/1.8;
      cout<<b<<setw(15);

   }
}
