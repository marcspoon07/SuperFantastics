#include "src/headers/Video.h"
#include "src/headers/Input.h"
#include "src/headers/Debug.h"

int main(int argc, char* args[]) {
	Video* video = Video::getInstance();
	Input* input = Input::getInstance();

	while (!input->WindowQuit() && !input->getKeyDown(SDL_SCANCODE_ESCAPE)) {
		video->clearScreen();
		input->UpdateInputs();

		// Game logic

		video->updateScreen();
		video->tickDelay();
	}

	video->close();

	delete video;

	return 0;
}