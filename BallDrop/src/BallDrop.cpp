//============================================================================
// Name        : BallDrop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "constants.h"
using namespace std;

double getTowerHeight()
{
	double height;
	cout<<"What is the height of the building?"<<endl;
	cin>>height;
	return height;
}
double calculate(double height, int seconds)
{
	double distance;
	double distancefromGround;
	distance = (MyConstants::acceleration * seconds * seconds)/2;
	cout<<"The distance is "<<distance<< endl;
	distancefromGround = height - distance;
//	if(distancefromGround <= 0)
//	{
//		cout<<"The ball has reached the ground"<<endl;
//	}
//	else
//	{
//		cout<<"The ball is at "<<distancefromGround<< "meters from the ground"<<endl;
//	}
	return distancefromGround;
}
int main() {
//	int16_t height;
//	int8_t seconds = 5;
//	cout << "What is the initial height of the building?" << endl; // prints !!!Hello World!!!
//	cin >> height;
//
//	//calculating the distance between the ground and the ball.
//
//	double distance = 0; // how far the ball has fallen.
//    double distancefromGround = 0;
//	//for(int a=0;a<=(MyConstants::seconds);a++)
//    for(int a=0;a<=seconds;a++)
//	{
//		//distance = (MyConstants::acceleration * (MyConstants::seconds * MyConstants::seconds))/2;
//    	distance = (MyConstants::acceleration * a * a)/2;
//    	cout<<"The distance is "<<distance<< endl;
//		distancefromGround = height - distance;
//		if(distancefromGround <= 0)
//		{
//			cout<<"The ball has reached the ground"<<endl;
//		}
//		else
//		{
//			cout<<"The ball is at "<<distancefromGround<< "meters from the ground"<<endl;
//		}
//	}
	double distancefromGround;
	double height = getTowerHeight();
    distancefromGround =calculate(height,5);
    if(distancefromGround <= 0)
	{
		cout<<"The ball has reached the ground"<<endl;
	}
	else
	{
		cout<<"The ball is at "<<distancefromGround<< " meters from the ground"<<endl;
	}

	return 0;
}
