#include "header.h"

void show(List* p)
{
	int i = 0;
	Node* n;
	n = p->head;
	printf("=================================\n");
	while (i < p->count)
	{
		printf("���� : %s\n", n->title);
		printf("���� : %s\n", n->director);
		printf("�ð�(��) : %d\n", n->time);
		printf("�帣 : %s\n", n->genre);
		printf("=================================\n");
		i++;
		n = n->next;
	}
}