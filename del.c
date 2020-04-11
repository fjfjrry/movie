#include "header.h"

void del(List* p, int number) {
	
	if (number == 1) {
		Node* node = p->head;
		Node* nextNode = node->next;
		free(node);
		p->head = nextNode;
		return;
	}

	Node* node = p->head;

	for (int i = 0; i < number-2; i++) {
		node = node->next;
	}
	Node* previousNode = node;
	node = node->next;
	Node* nextNode = node->next;
	free(node);
	previousNode->next = nextNode;

}