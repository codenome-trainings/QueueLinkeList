#include "Queue.h"
/*
 * Implements the Queue Lib using the concept of linked list
 */

int main() {

    Queue* q = init();

    enqueue(q, 5);
    display(q);
    enqueue(q, 3);
    display(q);
    cout << "Deleted Number: " << dequeue(q) << endl;
    display(q);
    enqueue(q, 7);
    display(q);
    cout << "Deleted Number: " << dequeue(q) << endl;
    display(q);
    cout << "Number is front: " << front(q) << endl;
    display(q);
    cout << "Deleted Number: " << dequeue(q) << endl;
    display(q);
    cout << "Deleted Number: " << dequeue(q) << endl;
    display(q);
    cout << ( isEmpty(q) ? "True" : "False" ) << endl;
    display(q);
    enqueue(q, 9);
    display(q);
    enqueue(q, 7);
    display(q);
    cout << "Size: " << size() << endl;
    display(q);
    enqueue(q, 3);
    display(q);
    enqueue(q, 5);
    display(q);
    cout << "Deleted Number: " << dequeue(q) << endl;
    display(q);
    
    free(q);


    return 0;
}