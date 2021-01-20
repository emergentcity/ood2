#include "pch.h"
#include "song.h"
#include <iostream>
using namespace std;

string song::toString() {

}

string song::getName() {
	return this->name;
}

void song::setName(std::string name) {
	this->name = name;
}

string song::getArtist() {
	return this->artist;
}

void song::setArtist(std::string artist) {
	this->artist = artist;
}