/*这是一个多行注释
*
*FileName: T6_13.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculation of approximate numbers
*/
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{   int a;
    double b,c;
    cin>>a;
    double num[a-1];
     for(int i=0;i<=a-1;i++)
     {  cin>>b;
         num[i]=b;
     }
     for(int j=0;j<=a-1;j++)
     { c=floor(num[j]+0.5);
       cout<<num[j]<<"   "<<c<<endl;
     }

    return 0;
}
