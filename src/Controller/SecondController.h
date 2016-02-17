/*
 * Controller.h
 *
 *  Created on: Jan 19, 2016
 *      Author: talm8994
 */

#ifndef CONTROLLER_SECONDCONTROLLER_H_
#define CONTROLLER_SECONDCONTROLLER_H_
using namespace std;

class SecondController
{
private:
	int classCount;

public:
	SecondController();
	void setClassCount (int classCount);
	int getClassCount();
	string getClassName();
	void start();

};



#endif /* CONTROLLER_SECONDCONTROLLER_H_ */
