#include "header.h"

void init(List* p) {
	
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL) {
		printf("데이터 파일을 찾을 수 없습니다\n");
		return;
	}

	Node* n = p->head;

	while(!feof(fp)) {
		fscanf("%s", n->title);
		fscanf("%s", n->director);
		fscanf("%d", n->time);
		fscanf("%s", n->genre);
		p->count++;
		n = n->next;
	}

}
