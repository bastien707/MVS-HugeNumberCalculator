#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

// forward declarations
typedef struct Node Node;

typedef struct DoublyLinkedList {
    Node* start;
    Node* end;
} DoublyLinkedList;


extern DoublyLinkedList*	createDoublyLinkedList 				(void);
extern DoublyLinkedList* 	createDoublyLinkedListFromString	(const char* digitString);
extern void 				deleteDoublyLinkedList 				(const DoublyLinkedList* l);
extern int 					getDoublyLinkedListLength 			(const DoublyLinkedList* l);
extern void 				removeStartFromDoublyLinkedList 	(const DoublyLinkedList* l);
extern void 				removeEndFromDoublyLinkedList 		(const DoublyLinkedList* l);
#endif // !DOUBLY_LINKED_LIST
