#include "srcctr.h"

void SRCCTR::PrintScene(){
	switch(CurScene){
	case 0:
		introScene.PrintUI();
		break;
	}
}

void SRCCTR::TransferSceneWithMouse(){
	switch(CurScene){
	case 0:
		introScene.SceneTransfer();
		break;
	}
}
	
void SRCCTR::TraanferSceneWithInputs(){
	switch(CurScene){
	case 0:
		introScene.MouseEventTransfer();
		break;
	}
}