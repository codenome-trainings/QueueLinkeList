//
// Created by thiago on 4/22/17.
//

#include "Queue.h"

int count = 0;

Queue* init() {
    Queue* q = (Queue*) malloc(sizeof(Queue));
    q->initList = q->finishList = NULL;
    return q;
}

void enqueue(Queue* q, int data) {
    List* n = (List*) malloc(sizeof(List));
    n->data.number = data;
    n->next = NULL;

    if(q->finishList != NULL) q->finishList->next = n;
    else q->initList = n;

    q->finishList = n;
    count++;
}

int dequeue(Queue* q) {
    List* t;
    int data;

    if(isEmpty(q)) {
        cout << "Sorry, Queue is Empty!" << endl;
        return -99999;
    }

    t = q->initList;
    data = t->data.number;
    q->initList = t->next;

    if(q->initList == NULL) q->finishList = NULL;
    free(t);
    count--;
    return data;
}

int front(Queue* q) {
    if(isEmpty(q)) {
        cout << "Sorry, Queue is Empty!" << endl;
        return -99999;
    }
    List* t;
    t = q->initList;
    return t->data.number;
}

bool isEmpty(Queue* q) {
    return q->initList == NULL;
}

void freeQueue(Queue* q) {
    List* list = q->initList;
    while (list != NULL) {
        List* t = list->next;
        free(list);
        list = t;
    }
    free(q);
}

int size() {
    return count;
}

void display(Queue* q) {

    if (isEmpty(q)) {
        cout << "Queue list is empty" << endl;
        return;
    }

    List* list;
    cout << "[ ";
    for (list = q->initList; list != NULL ; list = list->next) {
        cout << list->data.number;
        if(list->next != NULL)
            cout << ", ";
    }
    cout << " ]" << endl << endl;
}