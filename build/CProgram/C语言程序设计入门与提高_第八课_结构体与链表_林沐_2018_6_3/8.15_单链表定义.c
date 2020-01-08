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

void list_init(List *list);
void list_destroy(List *list);
void list_insert(List *list, int data);
void list_erase(List *list, int data);
ListNode* list_find(List *list, int data);
void list_print(List *list);

int main(){
	List list;
	return 0;
}

