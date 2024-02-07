#pragma once
class Tetris
{
public:
	Tetris(int rows, int cols, int left, int top, int blockSize);
	void init();
	void play();

private:
	void keyEvent();
	void updateWindow();
	int getDelay();
	void drop();
	void clearLine();

private:
	int delay;
	int update;
};

