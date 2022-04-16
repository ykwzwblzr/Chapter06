/*这是一个多行注释
*
*FileName: T6_32.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Evaluation of achievement
*/
#include <iostream>
using namespace std;
void qualityPoints(int a);
int main()
{   int a;
    cin>>a;
   qualityPoints(a);
    return 0;
}
void qualityPoints(int a)
 { int b;
   if(a>=90&&a<=100)
   {
       b=4;
        cout<<b;
   }else if(a>=80&&a<=89)
   {  b=3;
      cout<<b;
   }
   else if(a>=70&&a<=79)
   {  b=2;
     cout<<b;
   }
   else if(a>=60&&a<=69)
   {  b=1;
      cout<<b;
   }
   else
   {
       b=0;
        cout<<b;
   }
 }
