//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
#include "musicLibrary.h"

using namespace std;

int main() {
	musicLibrary library;
	start(library);

	return 0;
}

void start(musicLibrary library) {
	library.printPlaylists();
	while (true) {

	}
}
