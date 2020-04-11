#include "header.h"

int main() {

	List li;

	init(&li);

	int chooseMenu;
	int title[TITLE_SIZE];
	int director[DIRECTOR_SIZE];
	int time;
	int genre[GENRE_SIZE];
	char temp;

	while (1) {
		printf("1. 추가/ 2,삭제/ 3.보기 (-1은 종료): ");
		scanf("%d", &chooseMenu);
		scanf("%c", &temp);
		if (chooseMenu == -1){
			release(&li);
			break;
		}
		else if (chooseMenu == 1) {
			printf("제목 입력 : ");
			gets(title);
			printf("감독 이름 : ");
			gets(director);
			printf("시간 입력 : ");
			scanf("%d", &time);
			scanf("%c", &temp);
			printf("장르 입력 : ");
			gets(genre);
			insert(title, director, time, genre, &li);
		}
		else if (chooseMenu == 2) {
			printf("삭제할 영상의 제목 입력 : ");
			gets(title);
			del(&li, search(title, &li));
		}
		else if (chooseMenu == 3) {
			show(&li);
		}
	}

}