#include "header.h"

void release(List* p) {

	FILE* fp = fopen("data.txt", "w");
	if (fp == NULL) {
		printf("데이터 파일을 찾을 수 없습니다\n");
		return;
	}

	Node* n = p->head;
	
	for (int i = 0; i < p->count; i++) {
		fprintf(fp, "%s ", n->title);
		fprintf(fp, "%s ", n->director);
		fprintf(fp, "%d ", (n->time));
		fprintf(fp, "%s\n", n->genre);
		n = n->next;
	}

	//Node** nodeArr = (Node*)malloc(sizeof(Node*) * p->count);
	////      nodeArr[sizeof(Node*)*p->count]
	//Node* node;
	//node = p->head;
	//for (int i = 0; i < p->count; i++) {
	//	*(nodeArr + i) = node;
	//	node = node->next;
	//}
	//for (int i = p->count -1; i >=0; i--){
	//	free(nodeArr + i);
	//}

}
