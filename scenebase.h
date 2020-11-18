#include "stdfax.h"

void gotoxy(int, int);
void textcolor(int);
void PrintUILine();

class scenebase{
	int scenenum;
public:
	scenebase(int);
	
	//씬마다 구현 지정 (순수 가상 함수로 정의 강요.)
	virtual void PrintUI() = 0;
	virtual int SceneTransfer() = 0;
	virtual int MouseEventTransfer() = 0;
	
	virtual ~scenebase(){
		
	}
protected:
	
}: