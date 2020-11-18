#include "stdafx.h"
#include "Title.h"

HANDLE CIN = NULL; //Console input device.

int main(){
	DWORD mode;
    WORD key;	
    COORD pos; //COORD -> 콘솔 커서.
	
	int event;
	int x;
	int y;
	
	srand((unsigned int)time(NULL));
	Settitle();
	
	GetConsoleMode(CIN, &mode);
	SetConnsoleMode(CIN, mode | ENABLE_MOUSE_INPUT);
	
	return 0;
}