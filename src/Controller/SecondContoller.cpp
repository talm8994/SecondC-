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


string SecondController :: getClassName()
{
 return this->className;
}

int SecondController :: getClassCount()
{
	return this->classCount;
}

void SecondController :: start()
{
	cout << "welcome to my second C++ class this week" << endl;
	cout << "the Current value of classCount is " << getClassCount() << endl;
	cout << className << endl;
	int newCount;
	cout << "Choose a new number for class" << endl;
	cin >> newCount;
	this->setClassCount(newCount);
	cout << "the Current value of classCount is " << getClassCount() << endl;
	cout << className.append(" ")
}


