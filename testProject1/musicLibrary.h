#pragma once
#ifndef MUSICLIBRARY_H
#define MUSICLIBRARY_H
#include <string>
#include "song.h"
#include "playlist.h"

class musicLibrary
{
	private: 
		vector <song> songs;
		vector <playlist> playlists;

	public:
		vector<song> getSongs();
		vector<playlist> getPlaylists();

		std::string printSongs();
		std::string printPlaylists();

		void addPlaylist(playlist playlist);
		void removePlaylist();
		void addSong();
		void removeSong();
};

#endif
