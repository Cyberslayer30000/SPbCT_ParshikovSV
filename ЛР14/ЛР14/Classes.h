#pragma once
class ChessFigure {
public:
	int type;
	char name[10];
	int x;
	int y;
	int countKills = 0; // количество фигур, которые может убить данная фигура
	int kills[10]; //массив фигур, которые может убить данная фигура
};

class Ferz : public ChessFigure {

public:
	bool canKill(int myX, int myY, int otherX, int otherY) {
		if ((myX - myY == otherX - otherY) || (myY + myX == otherX + otherY) || (myX == otherX) || (myY == otherY)) {
			return true;
		}
		else
		{
			return false;
		}
	}
};

class Peshka : public ChessFigure {

public:
	bool canKill(int myX, int myY, int otherX, int otherY) {
		if ((myX + 1 == otherX) && (myY - 1 == otherY) || ((myX - 1 == otherX) && (myY - 1 == otherY))) {
			return true;
		}
		else {
			return false;
		}
	}
};

class Horse : public ChessFigure {
public:

	bool canKill(int myX, int myY, int otherX, int otherY) {
		if (((myY + 2 == otherY) && (myX + 1 == otherX)) || ((myY + 2 == otherY) && (myX - 1 == otherX)) || ((myY - 2 == otherY) && (myX + 1 == otherX)) || ((myY - 2 == otherY) && (myX - 1 == otherX)) || ((myY + 1 == otherY) && (myX + 2 == otherX)) || ((myY - 1 == otherY) && (myX + 2 == otherX)) || ((myY + 1 == otherY) && (myX - 2 == otherX)) || ((myY - 1 == otherY) && (myX - 2 == otherX))) {
			return true;
		}
		else {
			return false;
		}
	}
};


