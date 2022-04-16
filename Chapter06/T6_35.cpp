/*这是一个多行注释
*
*FileName: T6_35.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Guess the number
*/
#include <iostream>
using namespace std;
void sw(int a,int b );
int main()
{   cout<<"I have a number between 1 and 1000"<<endl;
    cout<<"Can you guess my number"<<endl;
    cout<<"Please type your first guss"<<endl;
    int a;
    int b;
    a=1+rand() % 1000;
    int i=1;
    while(i)
    {cin>>b;
    sw(a,b );
    if(b==a)
         {break;}
         i++;
    }if(i==0)
    cout<<endl;
    cout<<"Ahah,You know the secret";
     if(i>10)
    cout<<"You should be able to do better";
    if(i<10)
    cout<<"Either you know the secret or you got lucky";



    return 0;
}
void sw(int a,int b )
{  if(b==a)
    {cout<<"1.Excellent! You guessed the number!"<<endl;
     cout<<"  Would you like to play again (y or n)"<<endl;}
   if(b>a)
     cout<<"3.Too high.Try again"<<endl;
    if(b<a)
    {  cout <<"2.Too low.Try again";
    }
}

