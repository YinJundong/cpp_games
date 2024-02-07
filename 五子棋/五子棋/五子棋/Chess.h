#pragma once
#include <graphics.h> // easyx
#include <vector>
using namespace std;

struct ChessPos {
	int row;
	int col;

	ChessPos(int r=0, int c=0):row(r), col(c){}
};

typedef enum {
	CHESS_WHITE = -1,
	CHESS_BLACK = 1
}chess_kind_t;

class Chess
{
public:
	Chess(int gradeSize, int marginX, int marginY, float chessSize);

	void init();
	bool clickBoard(int x, int y, ChessPos* Pos);
	void chessDown(ChessPos *pos, chess_kind_t kind);
	int getGradeSize();
	int getChessData(ChessPos* pos);
	int getChessData(int row, int col);
	bool checkOver();
private:
	IMAGE chessBlackImg;
	IMAGE chessWhiteImg;

	int gradeSize;
	int margin_x;
	int margin_y;
	float chessSize;
	vector<vector<int>> chessMap;
	bool playerFlag;

	void updateGameMap(ChessPos* pos);

	bool checkWin();

	ChessPos lastPos;
};

