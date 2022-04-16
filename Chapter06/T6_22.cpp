/*这是一个多行注释
*
*FileName: T6_22.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Graphic output
*/
#include <iostream>
using namespace std;
void sides(int side);
int main()
{   int side;
    cin>>side;
    sides(side);
    return 0;
}
void sides(int side)
{ for(int i=1;i<=side;i++)
     {  for(int j=1;j<=side;j++)
     {
         cout<<"*";
     }
     cout<<endl;
     }
}
