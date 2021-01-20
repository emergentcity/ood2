#include "pch.h"
#include "playlist.h"
#include <iostream>
using namespace std;

string playlist::getName() {
	return this->name;
}

void playlist::setName(std::string name) {
	this->name = name;
}