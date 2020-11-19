#include "stdfax.h"

void Settitle(){
	switch(rand()%5){
	case 0:
		system("mode con:line=45 cols=95 | title=EraPi, 노예를 학대하세요.")
		break;
	case 1:
		system("mode con:line=45 cols=95 | title=EraPi, 연방의 아쉬운 1패, \'그래도 선전했다.\'라 발언.")
		break;
	case 2:
		system("mode con:line=45 cols=95 | title=EraPi, 무피는 푸딩을 좋아합니다.")
		break;
	case 3:
		system("mode con:line=45 cols=95 | title=EraPi, 공화국 컴퓨터에 파괴공작을 진행합니다...")
		break;
	case 4:
		system("mode con:line=45 cols=95 | title=EraPi, 3.1415초동안, 망고는 3.1415^3141592개 먹히고 있습니다.")
		break;
	}
}
