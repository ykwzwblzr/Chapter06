/*这是一个多行注释
*
*FileName: T6_28.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: prefect number
*/
#include <iostream>
using namespace std;
void sn(int a);
int main()
{   int a;
    sn(a);
    return 0;
}
void sn(int a)
{  int sum=0 ;
  cout<<"1  ";
for(int i=3;i<=1000;i++)
{ for(int j=1;j<i;j++)
    {  if(i%j==0)
       sum=sum+j;
    }
    if(sum==i)
        cout<<i<<"  ";
    sum=0;
}
}
