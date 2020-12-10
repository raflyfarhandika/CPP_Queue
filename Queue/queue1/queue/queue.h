#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

typedef int infotype;
struct Queue{
    infotype info[5];
    int head,tail;
};

void CreateQueue(Queue &q);
bool isEmptyQueue(Queue q);
bool isFullQueue(Queue q);
void enqueue(Queue &q, infotype x);
infotype dequeue(Queue &q);
void printInfo(Queue q);


#endif // QUEUE_H_INCLUDED
