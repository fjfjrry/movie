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
		printf("1. �߰�/ 2,����/ 3.���� (-1�� ����): ");
		scanf("%d", &chooseMenu);
		scanf("%c", &temp);
		if (chooseMenu == -1){
			release(&li);
			break;
		}
		else if (chooseMenu == 1) {
			printf("���� �Է� : ");
			gets(title);
			printf("���� �̸� : ");
			gets(director);
			printf("�ð� �Է� : ");
			scanf("%d", &time);
			scanf("%c", &temp);
			printf("�帣 �Է� : ");
			gets(genre);
			insert(title, director, time, genre, &li);
		}
		else if (chooseMenu == 2) {
			printf("������ ������ ���� �Է� : ");
			gets(title);
			del(&li, search(title, &li));
		}
		else if (chooseMenu == 3) {
			show(&li);
		}
	}

}