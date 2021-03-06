#ifndef __LIST_H__
#define __LIST_H__

#include <stdbool.h>

typedef struct ListNode {
    struct ListNode* prev;
    struct ListNode* next;
    void* value;
    int testValue;
} ListNode;

typedef struct List {
    ListNode* head;
    ListNode* tail;
    unsigned long len;
} List;

typedef struct ListIter {
    ListNode* next;
    unsigned long len;
} ListIter;

bool ListIsEmpty(List* list);
void ListAdd(List* list, void* data);
ListIter* ListIterator(List* list);
ListNode* ListNext(ListIter* listIter);
ListNode* ListFirst(List* list);
ListNode* ListFirstDelete(List* list);
ListNode* ListLast(List* list);
ListNode* ListLastDelete(List* list);
ListNode* ListGetPop(List* list);
void ListClear(List* list);
void ListDestroy(List* list);
bool ListIterHasNext(ListIter* listIter);
List* ListCreate();
#endif