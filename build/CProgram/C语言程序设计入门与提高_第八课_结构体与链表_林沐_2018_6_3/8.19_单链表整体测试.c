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
	
	list_insert(&list, 10);
	list_insert(&list, 2);
	list_insert(&list, 10);
	list_insert(&list, 3);
	list_insert(&list, 10);
	list_print(&list);
	
	list_erase(&list,2);
	list_print(&list);	
	
	list_erase(&list,10);
	list_print(&list);	
	
	list_insert(&list, -99);
	list_insert(&list, 88);
	list_print(&list);
	
	ListNode *node = list_find(&list, -99);
	printf("node next data = %d\n", node->next->val);	
	list_destroy(&list);
	
	return 0;
}

