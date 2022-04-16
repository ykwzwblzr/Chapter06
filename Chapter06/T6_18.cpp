/*这是一个多行注释
*
*FileName: T6_18.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The power of operation
*/
#include <iostream>
using namespace std;
int integerPower(int a,int b);
int main()
{   int a;
    int b;
    cin>>a>>b;
    cout<<integerPower( a,b)<<endl;
    return 0;
}int integerPower(int a,int b)
{  int c=1;
  for(int i=1;i<=b;i++)
  { c=c*a;
  }
  return c;
}
