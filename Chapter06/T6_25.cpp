/*这是一个多行注释
*
*FileName: T6_25.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculate number of seconds
*/
#include <iostream>
using namespace std;
int time(int a,int b,int c);
int main()
{   int a;
     int b;
     int c;
     cin>>a>>b>>c;
     cout<<time(a, b,c);
    return 0;
}
int time(int a,int b,int c)
{  int d=0;
   d=a*60*60+b*60+c;
   return d;
}
