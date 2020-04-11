#include "header.h"

void show(List* p)
{
	int i = 0;
	Node* n;
	n = p->head;
	printf("=================================\n");
	while (i < p->count)
	{
		printf("제목 : %s\n", n->title);
		printf("감독 : %s\n", n->director);
		printf("시간(분) : %d\n", n->time);
		printf("장르 : %s\n", n->genre);
		printf("=================================\n");
		i++;
		n = n->next;
	}
}