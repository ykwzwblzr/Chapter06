/*这是一个多行注释
*
*FileName: T6_21.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Determination of even numbers
*/
#include <iostream>
using namespace std;
int iseven(int a);
int main()
{   int a,b;
    cin>>b;
    for(int i=1;i<=b;i++)
    { cin>>a;
      cout<<iseven(a)<<endl;
    }
    return 0;
}
int iseven(int a)
{ if(a%2==0)
  return 1;
  else
    return 0;
}
