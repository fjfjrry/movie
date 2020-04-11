#include "header.h"

void show(List* p)
{
	int i = 0;
	Node* n;
	n = p->head;
	while (i < p->count)
	{
		printf("%s", n->title);
		printf("%s", n->director);
		printf("%d", n->time);
		printf("%s", n->genre);
		i++;
		n = n->next;
	}
}