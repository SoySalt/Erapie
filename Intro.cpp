#include "Intro.h"

Intro::Intro()
	: scenebase(0){
	
}

virtual void Intro::PrintUI(){
	for(int i = 0; i < 6; i++{
		gotoxy(5,i+4);
		cout << logo[i];
	}
	void PrintUIline();
}

virtual int Intro::SceneTransfer(){
	char c[10];
	cin.getline(c, 10);
	
	if(strcmp(c, "0\n"))return 10; //load main scene.
	else if (strcmp(c, "1\n")) return 100; //load dataload scene.
	else return 0; //stay curscene;
}

virtual int Intro::MouseEventTransfer(){
	
}