/*这是一个多行注释
*
*FileName: T6_33.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Flip a coin
*/
#include <iostream>
void flip1();
void flip2();
using namespace std;
int main()
{  int a;
   int j=0;
int k=0;
   for(int i=1;i<=100;i++)
   { a=0+rand() % 2;
     if(a==0)
        { flip1();
          k++;
        }
      else
      {
        flip2();
        j++;
      }
   }cout<<endl;
   cout<<"正面"<<k<<endl;
     cout<<"背面"<<j;
    return 0;
}
void flip1()
{
    cout<<"1"<<" ";
}
void flip2()
{
    cout<<"0"<<" ";
}
