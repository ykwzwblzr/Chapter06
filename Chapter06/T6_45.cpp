/*这是一个多行注释
*
*FileName: T6_45.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Program modification
*/
#include <iostream>
using namespace std;
int mystery(int ,int );
int main()
{ int x=0;
  int y=0;
  cout<<"Enter two integers: ";
  cin>>x>>y;
  cout<<"The result is"<<mystery(x,y)<<endl;
    return 0;
}
int mystery( int a,int b)
{ if(1==b)
   return a;
else if(b<=0)
    return -a-mystery(a,b+1);
   else return a+mystery(a,b-1);
}
