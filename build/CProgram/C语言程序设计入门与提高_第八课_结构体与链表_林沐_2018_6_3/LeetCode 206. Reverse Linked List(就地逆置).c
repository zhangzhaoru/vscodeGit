
#include <stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

typedef struct ListNode ListNode;

struct ListNode* reverseList(struct ListNode* head) {
    ListNode *new_head = NULL;
	while(head){
		ListNode *next = head->next;
		head->next = new_head;
		new_head = head;
		head = next;
	}
	return new_head;
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
	printf("Before reverse:\n");
	while(head){
		printf("%d\n", head->val);
		head = head->next;
	}
	head = reverseList(&a);
	printf("After reverse:\n");
	while(head){
		printf("%d\n", head->val);
		head = head->next;
	}
	return 0;
}

