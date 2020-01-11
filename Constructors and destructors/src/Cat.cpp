/*
 * Cat.cpp
 *
 *  Created on: 23 дек. 2019 г.
 *      Author: Asus
 */
#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat() {
	cout << "Cat created..." << endl;
	happy = true;
}

Cat::~Cat(){
	cout << "Cat destroyed..." << endl;
}

void Cat::speak(){
	if(happy){
		cout << "Meouww" << endl;
	} else {
		cout << "SSsssh" << endl;
	}
}
