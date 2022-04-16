/*这是一个多行注释
*
*FileName: T6_17.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The random number
*/
#include <iostream>
using namespace std;
int main()
{   int su[5]={2,4,6,8,10};
    int sd[5]={3,5,7,9,11};
    int th[5]={6,10,14,18,22};
    int i=0+rand () %4;
    int j=0+rand () %4;
    int w=0+rand () %4;
    cout<<su[i]<<endl;
    cout<<sd[j]<<endl;
    cout<<th[w]<<endl;
    return 0;
}
