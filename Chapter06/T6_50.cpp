/*这是一个多行注释
*
*FileName: T6_50.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: triple
*/
#include <iostream>
using namespace std;
int tripleByReference(int &count)
  { return 3*count;
  }
int tripleByValue(int count)
{ return 3*count;
  }
int main()
{
int count;
    cin>>count;
    cout<<tripleByReference( count)<<endl;
    cout<<tripleByValue(count);
    return 0;
}
