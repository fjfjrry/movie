#include "header.h"

void init(List* p) {
	
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL) {
		printf("������ ������ ã�� �� �����ϴ�\n");
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
