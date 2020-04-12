#include "header.h"

void init(List* p) {
	
	p->count = 0;
	p->head = NULL;

	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL) {
		printf("������ ������ ã�� �� �����ϴ�\n");
		return;
	}

	Node* n = (Node*)malloc(sizeof(Node));

	while(1) {
		
		fscanf(fp, "%s", n->title);
		fscanf(fp, "%s", n->director);
		fscanf(fp, "%d", &(n->time));
		fscanf(fp, "%s", n->genre);
		if(feof(fp)) break;
		insert(n->title, n->director, n->time, n->genre, p);
	}
	fclose(fp);
}
