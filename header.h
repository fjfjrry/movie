
#include <stdio.h>
#include <malloc.h>

#define TITLE_SIZE 20
#define DIRECTOR_SIZE 20
#define GENRE_SIZE 10

typedef struct _node {

	char title[TITLE_SIZE];
	char director[DIRECTOR_SIZE];
	int time;
	char genre[GENRE_SIZE];

	struct _node* next;

}Node;

typedef struct _list {
	
	int count;
	Node* head;

}List;

void show(List *p);
void init(List *p);
void insert(char* title, char* director, int time, char* genre, List* p);
void del(List* p, int number);
void edit(int order, char* title, char* director, int time, char* genre);
int search(char* title, List* p);
void release(List* p);
void sort(List* p, int mode);
