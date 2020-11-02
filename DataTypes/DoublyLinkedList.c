#include "DoublyLinkedList.h"

#include <stdio.h>

#define START_ASCII_DIGIT 48
#define END_ASCII_DIGIT 58

typedef unsigned short Digit;

typedef struct Node {
    Digit digit;
    struct Node* next;
    struct Node* previous;
} Node;



static Node*	createNode 		(const Digit digit);
static void 	deleteNode 		(Node** node);
static int 		isNodeEmpty 	(const Node* node);

static Digit 	charToDigit 	(const char c);
static char 	digitToChar 	(const Digit digit);

static int 		addDigitAtStart				(const DoublyLinkedList* l, const Digit digit);
static int		addDigitAtEnd 				(const DoublyLinkedList* l, const Digit digit);
static Digit 	getDigitByPlaceFromStart 	(const DoublyLinkedList* l, const unsigned int place);


static Node* createNode (const Digit digit) {
    return NULL;
};


static void deleteNode (Node** node) {

}

static int isNodeEmpty (const Node* node) {
    // WARNING return NULL;
    return 0;
}


static Digit charToDigit (const char c) {
    // WARNING return NULL;
    return 0;
}

static char digitToChar (const Digit digit) {
	return 0;
}

static int addDigitAtStart (const DoublyLinkedList* l, const Digit digit) {
    return 0;
}

static int addDigitAtEnd (const DoublyLinkedList* l, const Digit digit) {
    return 0;
}

static Digit getDigitByPlaceFromStart (const DoublyLinkedList* l, const unsigned int place) {
    // WARNING return NULL;
    return 0;
}


DoublyLinkedList* createDoublyLinkedList (void) {
    return NULL;
}

DoublyLinkedList* createDoublyLinkedListFromString (const char* digitString) {
    return NULL;
}

void deleteDoublyLinkedList (const DoublyLinkedList* l) {

}

int getDoublyLinkedListLength (const DoublyLinkedList* l) {
    return 0;
}

void removeStartFromDoublyLinkedList (const DoublyLinkedList* l) {
	
}

void removeEndFromDoublyLinkedList (const DoublyLinkedList* l) {
	
}



