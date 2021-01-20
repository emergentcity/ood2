#include "pch.h"
#include "musicLibrary.h"
#include "song.h"
#include <iostream>
using namespace std;

vector<song> musicLibrary::getSongs() {
	return this->songs;
}

vector<playlist> musicLibrary::getPlaylists() {
	return this->playlists;
}

string musicLibrary::printSongs() {
	for (song song : this->songs) {
		cout << song.getName() << " by " << song.getArtist() << endl;
	}
	return "";
}

string musicLibrary::printPlaylists() {
	for (playlist playlist : this->playlists) {
		cout << playlist.getName() << endl;
	}
	return "";
}

void musicLibrary::addPlaylist(playlist playlist) {
	this->playlists.push_back(playlist);
}

void musicLibrary::removePlaylist() {

}

void musicLibrary::addSong() {

}

void musicLibrary::removeSong() {

}

