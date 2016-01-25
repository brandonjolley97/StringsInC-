/*
 * StringsController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: bjol7457
 */

#ifndef CONTROLLER_STRINGSCONTROLLER_H_
#define CONTROLLER_STRINGSCONTROLLER_H_
#include <iostream>

using namespace std;

class StringsController
{
private:
	std::string greetings;
	std::string bye;
	int greetingsCount;
public:
	StringsController();
	void start();


};


#endif
