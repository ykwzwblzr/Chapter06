/*这是一个多行注释
*
*FileName: T6_48.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Gambling game
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
unsigned int rollDice();
int main()
{
	enum Status{CONTINUE,WON,LOST};
	srand(static_cast<unsigned int>(time(0)));
	unsigned int myPoint = 0;
	Status gameStatus = CONTINUE;
	unsigned int sumOfDice = rollDice();
	switch (sumOfDice)
	{
	case 7:
	case11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is" << myPoint << endl;
		break;

	}
	while (CONTINUE == gameStatus)
	{
		if(sumOfDice==myPoint)

		sumOfDice = WON;
		else if(sumOfDice==7)
		gameStatus = LOST;
	}


	if (WON == gameStatus)
		cout << "Player wins" << endl;
	else
		cout << "Player loses" << endl;
}

unsigned int rollDice()
{

	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 1 + rand() % 6;
	unsigned int sum = die1 + die2;
	cout << "Plater rolled" << die1 << "+" << die2 << "=" << sum << endl;
	return sum;
}
