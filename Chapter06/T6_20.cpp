/*这是一个多行注释
*
*FileName: T6_20.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Multiple decision
*/
#include <iostream>
using namespace std;
int multiple(int a,int b);
int main()
{   int c;
    cin>>c;
    int a,b;
    for(int i=1;i<=c;i++)
    { cin>>a>>b;
      cout<<multiple( a, b);
    }
    return 0;
}
int multiple(int a,int b)
{  if(a%b==0&&a>=b)
   return true;
   else
    return false;
}
