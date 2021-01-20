#pragma once
#ifndef SONG_H
#define SONG_H
#include <string>

enum Genre { pop, classical, rock, instrumental };
class song
{
private:
	std::string name = "";
	std::string artist = "";
	Genre genre = pop;

public:
	virtual std::string toString();
	std::string getName();
	void setName(std::string name);

	std::string getArtist();
	void setArtist(std::string artist);

};

#endif
