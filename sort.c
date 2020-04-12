#include "header.h"

void sort(List* p, int mode) {	//p�� head����, mode�� ����/�ð�/����/�帣 � �� �������� ��������
	int i, j, k;
	if (mode == 2) { //�ð�

		for (i = 0; i < p->count; i++) {	//�����
												//ù��°
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

			for (j = 0; j < p->count-2; j++) {	//���°(ù��° ����)
				node0 = p->head;
				for (k = 0; k < j; k++) {	//���� ��� ������ ���� �ٰ�����
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