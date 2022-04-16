/*这是一个多行注释
*
*FileName: T6_12.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Parking lot charges
*/
#include <iostream>
#include<iomanip>
using namespace std;
double calucateCharges(double hours,double Charge );
int main()
{   double car=3;
double hours;
double Charge;
    cout<<"Car"<<setw(10)<<"Hours"<<setw(10)<<"Charge";
    for(int i=1;i<=3;i++)
    {   cin>>hours ;
        cout<<i<<setw(11)<<fixed<<setprecision(2)<<hours<<setw(11)<<fixed<<setprecision(2)<<calucateCharges(hours,Charge);
    }
    return 0;
}
double calucateCharges(double hours,double Charge )
{  if(hours<=3)
Charge=2.00;
  if(hours>3&&hours<=11)
Charge=2.00+(hours-3)*0.5;
 if(hours>10)
    Charge=10;
 return Charge;
}
