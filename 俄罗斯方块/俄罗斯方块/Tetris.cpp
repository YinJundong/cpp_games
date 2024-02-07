#include "Tetris.h"

Tetris::Tetris(int rows, int cols, int left, int top, int blockSize)
{
}

void Tetris::init()
{
	delay = 30;
}

void Tetris::play()
{
	init();

	int timer = 0;
	while (1) {

		keyEvent();

		timer += getDelay();
		if (timer > delay) {
			timer = 0;
			drop();
			update = true;
		}

		if (update) {
			update = false;
			updateWindow();

			clearLine();
		}
	}
}

void Tetris::keyEvent()
{

}

void Tetris::updateWindow()
{
}

int Tetris::getDelay()
{
	return 0;
}

void Tetris::drop()
{
}

void Tetris::clearLine()
{
}
