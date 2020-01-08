#include <stdio.h>

typedef struct ListNode ListNode;
struct ListNode {
 	int val;
	ListNode *next;
};

typedef struct List List;
struct List{
	ListNode head;
	ListNode *last;
};

void list_init(List *list){
	list->head.val = 0;
	list->head.next = NULL;
	list->last = &list->head;
}

void list_insert(List *list, int data){
	ListNode *new_node = malloc(sizeof(ListNode));
	new_node->val = data;
	new_node->next = NULL;
	list->last->next = new_node;
	list->last = new_node;
}

void list_print(List *list){	
	ListNode *cur = list->head.next;
	printf("head");
	while(cur){
		printf("->[%d]",cur->val);
		cur = cur->next;
	}
	printf("\n");
}

void list_destroy(List *list){
	ListNode *cur = list->head.next;
	while(cur){
		ListNode *del = cur;
		cur = cur->next;
		free(del);
	}
	list_init(list);
}

void list_erase(List *list, int data){
	ListNode *pre = &list->head;
	ListNode *cur = list->head.next;
	while(cur){
		if(cur->val == data){
			ListNode *del = cur;
			pre->next = cur->next;
			cur = cur->next;
			free(del);
		}
		else{
			pre = cur;
			cur = cur->next;
		}
	}
	list->last = pre;
}

int main(){
	List list;
	list_init(&list);
	int i;
	for (i = 1; i <= 5; i++){
		list_insert(&list, i * 10);
	}
	list_print(&list);
	list_erase(&list, 20);
	list_print(&list);
	list_destroy(&list);	
	return 0;
}

