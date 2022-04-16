/*这是一个多行注释
*
*FileName: T6_58.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: times game
*/
#include <iostream>
using namespace std;
int time (int a,int b)
{  int c=a*b;
   return c;
}
int main()
{  int a,b;
    int k,m;
int d=1,e=0;
   while(d!=e)
{  a=0+rand()%9;
   b=0+rand()%9;
   cout<< "How much is "<<a<<" times "<<b<<endl;
   cin>>d;
   e=time(a,b);
   if(e==d)
    {  k=1+rand()%4;
      switch(k)
     { case 1: cout<<"Very good!";break;
      case 2: cout<<"Excellent!";break;
      case 3: cout<<"Nice woek!";break;
      case 4: cout<<"Keep up the good work";}
    }
    else
    {  while(e!=d)
      {
        m=1+rand()%4;
      switch(m)
      {case 1: cout<<" No,please try again."<<endl;break;
      case 2: cout<<" Wrong.Try once more."<<endl;break;
      case 3: cout<<" Don't give up!"<<endl;break;
      case 4: cout<<" No.Keep trying."<<endl;
      }
      cin>>d;}
      k=1+rand()%4;
      switch(k)
     { case 1: cout<<"Very good!";break;
      case 2: cout<<"Excellent!";break;
      case 3: cout<<"Nice woek!";break;
      case 4: cout<<"Keep up the good work";}

    }

}
    return 0;
}
