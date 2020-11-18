#include "stdfax.h"

//Scenes header files
#include "Intro.h"

class SRCCTRP{
	int curScene;
	Intro introscene;
	
	public:
	void PrintScene();
	
	void TransferSceneWithMouse();
	void TraanferSceneWithInputs();
};