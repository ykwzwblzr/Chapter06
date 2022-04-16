/*这是一个多行注释
*
*FileName: T6_49.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The area of a circle
*/
#include <iostream>
using namespace std;
inline double circleArea(const double r)
{   double s;
    double pi=3.14;
    s=pi*r*r;
    return s;
}int main()
{   double r;
    cout<<"请输入半径: ";
    cin>>r;;
    cout<<"面积是："<<circleArea(r)<<endl;

    return 0;
}
