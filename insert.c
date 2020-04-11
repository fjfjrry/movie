#include "header.h"
#include <string.h>

void insert(char* title, char* director, int time, char* genre, List* p) {

	Node* node = (Node*)malloc(sizeof(Node));
	Node* n = p->head;

	if (p->count == 0) {
		p->head = node;
	}
	else {
		for (int i = 0; i < p->count-1; i++) {
			n = n->next;
		}
		n->next = node;
	}

	strcpy(node->title, title);
	strcpy(node->director, director);
	node->time = time;
	strcpy(node->genre, genre);
	node->next = NULL;

	p->count++;

}