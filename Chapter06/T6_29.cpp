/*这是一个多行注释
*
*FileName: T6_29.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Prime number determination
*/
#include <iostream>
using namespace std;
void sw(int a);
int main()
{   int a;
     sw(a);
    return 0;

}
void sw(int a)
{  cout<<"2   ";
    for(int i=3;i<=10000;i++)
  { for(int j=2;j<=i/2;j++)
     {  if(i%j==0)
         break;
        else
        {if(j==i/2)
        cout<<i<<"  ";}
     }
  }
}
