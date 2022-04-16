/*这是一个多行注释
*
*FileName: T6_38.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Hannotta problem
*/
#include<bits/stdc++.h>
using namespace std;
int sum=0;
int hanoi(int n,int a,int b,int c)
{
	if(n==1)
	{
		sum++;
		cout<<"第"<<sum<<"步:盘子从"<<a<<"柱移至"<<b<<"柱"<<endl;
		return 0;
	}
	else
	{
		hanoi(n-1,a,c,b);
		sum++;
		cout<<"第"<<sum<<"步:盘子从"<<a<<"柱移至"<<b<<"柱"<<endl;
		hanoi(n-1,c,b,a);
	}
}
int main()
{
	int x;
	cin >> x;
	hanoi(x,1,3,2);
	return 0;
}
