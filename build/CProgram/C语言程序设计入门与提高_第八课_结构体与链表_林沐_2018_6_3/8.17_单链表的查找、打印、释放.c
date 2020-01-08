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

ListNode* list_find(List *list, int data){
	ListNode *cur = list->head.next;
	while(cur){
		if(cur->val == data){
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
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

void list_travel(List *list){
	ListNode *cur = list->head.next;
	while(cur){
		//do something
		cur = cur->next;
		//do something		
	}
}

int main(){
	List list;
	list_init(&list);
	int i;
	for (i = 1; i <= 5; i++){
		list_insert(&list, i * 10);
	}
	list_print(&list);
	ListNode *node = list_find(&list, 30);
	if (node){
		printf("%d\n", node->val);
	}
	else{
		printf("NULL\n");
	}
	
	node = list_find(&list, 100);
	if (node){
		printf("%d\n", node->val);
	}
	else{
		printf("NULL\n");
	}
	
	list_destroy(&list);
	
	return 0;
}

