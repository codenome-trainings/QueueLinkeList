//
// Created by thiago on 4/22/17.
//
#include <iostream>

using namespace std;

typedef struct data {
    int number;
} Data;

typedef struct list {
    Data data;
    struct list* next;
} List;

typedef struct queue {
    List* initList;
    List* finishList;
} Queue;

Queue* init();
void enqueue(Queue* q, int data);
int dequeue(Queue* q);
int front(Queue* q);
bool isEmpty(Queue* q);
void freeQueue(Queue* q);
int size();
void display(Queue* q);
