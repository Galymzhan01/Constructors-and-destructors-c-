//============================================================================
// Name        : Constructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "Starting the program..." << endl;
	{
	Cat jim;
	jim.speak();
	}
	cout << "Ending the program. Burying the cat..." << endl;
	return 0;
}
