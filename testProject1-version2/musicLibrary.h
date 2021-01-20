#pragma once
#ifndef MUSICLIBRARY_H
#define MUSICLIBRARY_H
#include <string>
#include "song.h"
#include "playlist.h"

class musicLibrary
{
private:
	std::vector <song> songs;
	std::vector <playlist> playlists;

public:
	std::vector<song> getSongs();
	std::vector<playlist> getPlaylists();

	std::string printSongs();
	std::string printPlaylists();

	void addPlaylist(playlist playlist);
	void removePlaylist();
	void addSong();
	void removeSong();
};

#endif
