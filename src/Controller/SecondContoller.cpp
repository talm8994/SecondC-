/*
 * SecondContoller.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: talm8994
 */
#include "SecondController.h";
#include <iostream>
using namespace std;

SecondController :: SecondController()
{
	this->classCount = 21;
}

void SecondController :: setClassCount(int classCount)
{
	this->classCount = classCount;
}

int SecondController :: getClassCount()
{
	return this->classCount;
}

void SecondController :: start()
{
	cout << "welcome to my second C++ class this week" << endl;
}


