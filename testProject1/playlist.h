#pragma once
#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <string>
#include <vector>
#include "song.h"

class playlist
{
	private: 
		std::string name = "";
		vector <song> list;

	public:
		std::string getName();
		void setName(std::string name);
};

#endif
