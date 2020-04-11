#include "header.h"

int search(char* title, List* p)
{
	int i = 0;
	int c;
	Node* n;
	n = p->head;
	int ret;
	while (i < p->count)
	{
		ret = strcmp(n->title, title);
		if (ret == 0)
		{/*
			printf("%s", n->title);
			printf("%s", n->director);
			printf("%s", n->time);
			printf("%s", n->genre);*/
			break;
		}
		i++;
		n = n->next;
	}
	return i + 1;
}