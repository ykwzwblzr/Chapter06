/*这是一个多行注释
*
*FileName: T6_30.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: palindrome
*/
#include <iostream>
using namespace std;
int hui(int a);
int main()
{   int a;
cin>>a;
cout<<hui(a);
    return 0;
}
int hui(int a)
{ int b=0;
 if(a>0)
  {while(a>0)
  { b=b*10+a%10;
     a=a/10;
  }
  return b;}
  else if (a==0)
  { b=0;
    return b;
  }
  else
  { a=-a;
  while(a>0)
  { b=b*10+a%10;
     a=a/10;
  }
  b=-b;
  return b;

  }
}
