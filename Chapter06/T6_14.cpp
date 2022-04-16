/*这是一个多行注释
*
*FileName: T6_14.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculate miles per gallon
*/
#include <iostream>
#include<cmath>
using namespace std;
double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);
int main()
{   double number;
   cin>>number;
   cout<<roundToInteger(number)<<endl;
    cout<<roundToTenths(number)<<endl;
     cout<<roundToHundredths(number)<<endl;
      cout<<roundToThousandths(number)<<endl;
    return 0;
}double roundToInteger(double number)
{ number=floor(number+0.5);
return number;
}
double roundToTenths(double number)
{ number=floor(number*10+0.5)/10;
return number;
}
double roundToHundredths(double number)
{ number=floor(number*100+0.5)/100;
return number;
}
double roundToThousandths(double number)
{ number=floor(number*1000+0.5)/1000;
return number;
}
