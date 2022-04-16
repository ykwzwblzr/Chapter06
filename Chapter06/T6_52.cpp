/*这是一个多行注释
*
*FileName: T6_52.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: minimum
*/
#include <iostream>
using namespace std;
template<class T>
T minimum( T value1 ,T value2 )
{
	T minimumValue = value1;
	if (value2 <minimumValue)
		minimumValue = value2;
	return minimumValue;
}

int main()
{
	int i1,i2;
	cin>>i1>>i2;
	cout<<"The minimum integer value is: "
		<<minimum(i1 ,i2)<<endl;

	double d1,d2;
	cin>>d1>>d2;
	cout<<"The minimum double value is: "
		<<minimum(d1 ,d2)<<endl;

	char c1,c2;
	cin>>c1>>c2;
	cout<<"The minimum characters value is: "
		<<minimum(c1 ,c2)<<endl;
	return 0;
}
