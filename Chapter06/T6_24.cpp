/*这是一个多行注释
*
*FileName: T6_24.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Splitting of numbers
*/
#include <iostream>
#include<cstdlib>
using namespace std;
void we(int a);
int main()
{   int a;
int b;
a=1+rand() % 32767;
cout<<a<<endl;
we(a);
    return 0;
}
void we(int a)
{  int b;
   int num=0;
   int k;
   k=a;
   while(k>0)
{  num=num*10+k%10;
   k=k/10;
}
  while(num>0)
  { b=num%10;
    num=num/10;
    cout<<b<<" ";
  }
}
