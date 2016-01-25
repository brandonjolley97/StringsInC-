/*
 * StringsController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: bjol7457
 */
#include <iostream>
#include <string>
#include "StringsController.h"


using namespace std;

StringsController :: StringsController()
{
	this->greetings = "Hello";
	this->bye = "See Ya";
	this->greetingsCount = 0;
}

void StringsController :: start()
{
	cout << greetings << endl;
	cout << greetings[2] << endl;
	cout << greetings.at(3) << endl;
	int greetingsCount = greetings.length();
	cout << "The greetings string is " << greetingsCount << " letters long." << endl;
	bool greetingsEmpty = greetings.empty();
	if(greetingsEmpty == 0)
	{
		cout << "The greetings string is not empty." << endl;
	}
	std::string greetingsPart = greetings.substr(0,2);
	std::string greetingsPiece = greetings.substr(3);
	cout << greetingsPart << " is a part of the greetings string" << endl;
	cout << greetingsPiece << " is a piece of the greetings sting" << endl;
	bool equal = greetings.compare(bye);
	if(equal == 0)
	{
		cout << "The greetings and bye strings are not the same length." << endl;
	}
	else
	{
		cout << "The greetings and bye strings are the same length." << endl;
	}


}
