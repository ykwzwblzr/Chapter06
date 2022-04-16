/*这是一个多行注释
*
*FileName: T6_55.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Random number generator
*/
#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>
using namespace std;
int main()
{   default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt (1,6);
    unsigned int seed=0;
    cout<<"Enter seed: ";
    cin>>seed;
    srand(seed);
    for(unsigned int i=1;i<=10;i++)
    { cout<<setw(10)<<randomInt(engine);
      if(i%5==0)
      {
          cout <<endl;
      }
    }
    return 0;
}
