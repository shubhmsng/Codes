#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int value;
	struct node *next;
};

bool insert_node(struct node *head, int val) {
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	
	if (! new_node) {
		return false;
	}
	
	struct node *tail = head;
	
	while (tail->next) {
		tail = tail->next;
	}
	
	tail->next = new_node;
	new_node->next = NULL;
	new_node->value = val;
	
	return true;
}

void display_linked_list(struct node *head) {
	if (head) {
		printf("%d ", head->value);
		
		display_linked_list(head->next);
	}
}

void sort_list(struct node *head) {
	
}

int main()
{
	struct node *head = NULL;
	
	int array[10] = {75, 34, 11, 16, 44, 27, 87, 55, 66, 9};
	
	int i;
	
	for (i = 0; i < 10; i++) {
		if (! head) {
			head = (struct node*) malloc(sizeof(struct node));
			head->value = array[i];
			head->next = NULL;
		} else {
			if (! insert_node(head, array[i])) {
				puts("error inserting");
			
				exit(0);
			}
		}
	}
	
	display_linked_list(head);
	
	puts("");
	
	for (i = 0; i < 9; i++) {
		struct node *temp1 = head;
		struct node *temp2 = head;
	
		temp2 = temp2->next;
	
		int min = temp1->value;
	
		while (temp2) {
			if (min > temp2->value) {
				min = temp2->value;
				temp1 = temp2;
			}
		
			temp2 = temp2->next;
		}
	
		int swap = head->value;
		head->value = temp1->value;
		temp1->value = head->value;
	}
	
	display_linked_list(head);
	
	return 0;
}