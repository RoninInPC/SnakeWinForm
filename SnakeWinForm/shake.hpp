#include<vector>
#define SIZEX 30
#define SIZEY 30
enum MovingInfo {
	ZERO,
	UP,
	DOWN,
	LEFT,
	RIGHT
};
enum GameInfo {
	LOAD,
	PAUSE,
	END,
	BEGIN
};
enum MusicInfo {
	PLAY,
	STOP,
	LOOSE
};
struct Point {
	int x;
	int y;
	void ShowPoint();
};
class Snake {
private:
	std::vector<Point> Body;
	int Size;
public:
	Snake() :Body(1, { 0,0}), Size(1) {};
	void SnakeMove(Point New);
	void SnakeGrow(Point New);
	~Snake();
	std::vector<Point> GetBody() { return Body; };
	int GetSize() { return Size; };
	void ShowSnake();
};
class Box {
private:
	Snake snake;
	int SizeX;
	int SizeY;
public:
	Box() :snake(), SizeX(SIZEX), SizeY(SIZEY) {};
	~Box();
	int GetSizeX() { return SizeX; };
	int GetSizeY() { return SizeY; };
	Snake GetSnake() { return snake; };
	void ShowBox();
};
class Game {
public:
	Box box;
	GameInfo GInfo;
	MusicInfo MInfo;
	MovingInfo MoInfo;
	Game() :box(), GInfo(BEGIN), MInfo(PLAY), MoInfo(ZERO) {};
	~Game();
	void IfGameEnd();	
	void ShowGameOver();
	void ShowPause();
};