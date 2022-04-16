/*这是一个多行注释
*
*FileName: T6_36.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The power of operation
*/#include <iostream>
using namespace std;
int power(int a,int b);
int main()
{   int a;
  int b;
  cin>>a>>b;
   cout<<power(a,b);
    return 0;
}
int power(int a,int b)
{  int c=1;
    while(b>=1)
{  c=c*a;
  b--;
}
  return c;
}
