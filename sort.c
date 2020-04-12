#include "header.h"

void sort(List* p, int mode) {	//p는 head접근, mode는 제목/시간/감독/장르 어떤 걸 기준으로 정렬할지
	int i, j, k;
	if (mode == 2) { //시간

		for (i = 0; i < p->count; i++) {	//몇바퀴
												//첫번째
			Node* node0 = p->head;				
			Node* node1 = p->head;
			Node* node2 = p->head->next;

			int time1 = node1->time;
			int time2 = node2->time;

			if (time2 < time1) {
				p->head = node2;
				node1->next = node2->next;
				node2->next = node1;
			}

			for (j = 0; j < p->count-2; j++) {	//몇번째(첫번째 이후)
				node0 = p->head;
				for (k = 0; k < j; k++) {	//비교할 노드 선택을 위해 다가가기
					node0 = node0->next;
				}
				node1 = node0->next;
				node2 = node1->next;

				time1 = node1->time;
				time2 = node2->time;

				if (time2 < time1) {
					node0->next = node2;
					node1->next = node2->next;
					node2->next = node1;
				}

			}
		}
	}

}