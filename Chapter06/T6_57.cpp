/*这是一个多行注释
*
*FileName: T6_57.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: times game
*/
#include <iostream>
using namespace std;
int time (int a,int b)
{  int c=a*b;
   return c;
}
int main()
{  int a,b;
int d=1,e=0;
   while(d!=e)
{  a=0+rand()%9;
   b=0+rand()%9;
   cout<< "How much is "<<a<<" times "<<b<<endl;
   cin>>d;
   e=time(a,b);
   if(e==d)
    cout<<"Very good!";
   else
   {  while(e!=d)
    {cout<<" No,please try again"<<endl;
    cin>>d;}
     cout<<"Very good!";}
}
    return 0;
}
