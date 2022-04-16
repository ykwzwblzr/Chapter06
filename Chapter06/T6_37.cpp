/*这是一个多行注释
*
*FileName: T6_37.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: fibonacci
*/
#include<stdio.h>
#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	int f1=1;
	int f2=0;
	int fn=0;
	for(int i=2;i<=n;i++)
	{
		fn=f2+f1;
		f2=f1;
		f1=fn;
	}
	return fn;
}
int main()
{
	int n;
	cout<<"请输入一个整数：";
	cout<<endl;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}
