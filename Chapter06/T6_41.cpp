/*这是一个多行注释
*
*FileName: T6_41.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Greatest common divisor
*/
#include <iostream>
using namespace std;
int gcd(int x,int y)
{ if(y==0)
return x;
 else
    return gcd(y,x%y);
}
int main()

{   int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
    return 0;
}
