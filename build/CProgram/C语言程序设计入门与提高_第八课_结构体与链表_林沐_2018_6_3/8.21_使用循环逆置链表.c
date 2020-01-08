#include <stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

typedef struct ListNode ListNode;

void print_list(ListNode *head, const char *list_name){
	printf("%s :", list_name);
	if (!head){
		printf("NULL\n");
		return;
	}
	while(head){
		printf("[%d] ", head->val);
		head = head->next;
	}
	printf("\n");
}

int main(){
	ListNode a;
	ListNode b;
	ListNode c;
	ListNode d;
	ListNode e;
	a.val = 1;
	a.next = &b;
	b.val = 2;
	b.next = &c;
	c.val = 3;
	c.next = &d;
	d.val = 4;
	d.next = &e;
	e.val = 5;
	e.next = 0;
	
	ListNode *head = &a;
	ListNode *new_head = NULL;
	ListNode *next = NULL;
	print_list(head, "old");
	print_list(new_head, "new");
	int i;
	for (i = 0; i < 5; i++){
		next = head->next;
		head->next = new_head;
		new_head = head;
		head = next;	
		print_list(head, "old");
		print_list(new_head, "new");
	}
	return 0;
}

