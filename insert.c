#include "header.h"
#include <string.h>

void insert(char* title, char* director, int time, char* genre, List* p) {

	Node* n = p->head;

	for (int i = 0; i < p->count-1; i++) {
		n = n->next;
	}

	Node* node = (Node*)malloc(sizeof(Node));

	n->next = node;

	strcpy(node->title, title);
	strcpy(node->director, director);
	node->time = time;
	strcpy(node->genre, genre);
	n->next = NULL;
	p->count++;

}