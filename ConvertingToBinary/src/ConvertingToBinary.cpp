//============================================================================
// Name        : ConvertingToBinary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
//so in this example. I was using int8_t instead of int, and it caused errors.
//One reason that may be is because the input number was signed or unsigned.
//or in other words, not enough space to represent 255.
//the int8_t variables were being represented differently
int getBinary(int inputNumber,int num)
{
	if(inputNumber>=num)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if(inputNumber>= num)
	{
		inputNumber = inputNumber-num;
		return inputNumber;
	}
	else
	{
		return inputNumber;
	}
}
bool isLarger(int inputNumber)
{
	if(inputNumber<0 || inputNumber>255)
	{
		cout<<inputNumber<<endl;
		cout<<"Input number doesn't fit the range"<<endl;
		return true;
	}

	return false;
}
int main() {

	int inputNumber;
	cout<< "Input a number between 0 and 255 "<<endl;
	cin>>inputNumber;

	bool isTooLarge;
     isTooLarge= isLarger(inputNumber);
	if(isTooLarge == 0)
	{
		inputNumber = getBinary(inputNumber,128);
		inputNumber = getBinary(inputNumber,64);
		inputNumber = getBinary(inputNumber,32);
		inputNumber = getBinary(inputNumber,16);
		inputNumber = getBinary(inputNumber,8);
		inputNumber = getBinary(inputNumber,4);
		inputNumber = getBinary(inputNumber,2);
		inputNumber = getBinary(inputNumber,1);
	}


	return 0;
}
