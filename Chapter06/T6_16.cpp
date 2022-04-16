/*这是一个多行注释
*
*FileName: T6_16.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The random number
*/
#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{    int n = 1+rand() % 2;
    n = 1+rand() % 100;
    n =0+rand() % 9;
    n = 1000+rand() % 1112;
    n = -1+rand() % 1;
    n = -3+rand() % 11;
    return 0;
}
