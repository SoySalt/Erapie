#include "scenebase.h"

void gotoxy(int x, int y){
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void textcolor(int num){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), num);
}

void PrintUILine(){
	textcolor(31);
	cout << width(95) << fill('=') << endl;
}

//생성자
scenebase::scenebase(int scenenum)
	: scenenum(scenenum){
	
}