#include"shake.hpp"
void Snake::SnakeMove(Point New) {
	for (int i = 0; i < this->Size; i++) {
		this->Body[i] = this->Body[i + 1];
	}
	this->Body[Size - 1] = New;
}
void Snake::SnakeGrow(Point New) {
	this->Size++;
	this->Body.push_back(New);
}
Snake::~Snake() {
	this->Body.clear();
}
Box::~Box() {
	this->snake.~Snake();
}
Game::~Game() {
	this->box.~Box();
}
void Game::IfGameEnd() {
	if (this->box.GetSnake().GetBody()[this->box.GetSnake().GetSize() - 1].x >= SIZEX ||
	this->box.GetSnake().GetBody()[this->box.GetSnake().GetSize() - 1].x < 0 ||
	this->box.GetSnake().GetBody()[this->box.GetSnake().GetSize() - 1].y >= SIZEY ||
	this->box.GetSnake().GetBody()[this->box.GetSnake().GetSize() - 1].y < 0) {
		this->GInfo = END;
		this->MInfo = LOOSE;
		this->MoInfo = ZERO;
		this->~Game();
		return;
	}
	for (int i = 0; i < this->box.GetSnake().GetSize() - 1; i++) {
		if (this->box.GetSnake().GetBody()[this->box.GetSnake().GetSize() - 1].x ==
		this->box.GetSnake().GetBody()[i].x &&
		this->box.GetSnake().GetBody()[this->box.GetSnake().GetSize() - 1].y ==
		this->box.GetSnake().GetBody()[i].y) {
			this->GInfo = END;
			this->MInfo = LOOSE;
			this->MoInfo = ZERO;
			this->~Game();
			return;
		}
	}
}