/*这是一个多行注释
*
*FileName: T6_34.cpp
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
    cin>>b;
    sw(a,b );
    return 0;
}
void sw(int a,int b )
{  if(b==a)
    {cout<<"1.Excellent! You guessed the number!"<<endl;
     cout<<"  Would you like to play again (y or n)"<<endl;}
   if(b>a)
     cout<<"2.Too low.Try again"<<endl;
    if(b<a)
    {  cout <<"3.Too high.Try again";
    }
}
