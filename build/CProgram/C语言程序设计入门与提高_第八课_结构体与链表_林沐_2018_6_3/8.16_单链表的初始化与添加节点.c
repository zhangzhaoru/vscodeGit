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

int main(){
	List list;
	list_init(&list);
	int i;
	for (i = 1; i <= 5; i++){
		list_insert(&list, i * 10);
	}
	ListNode *ptr = list.head.next;
	while(ptr){
		printf("%d\n", ptr->val);
		ptr = ptr->next;
	}
	return 0;
}

