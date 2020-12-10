#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

typedef int infotype;

struct Queue{
    infotype info[5];
    int head;
    int tail;
};

void CreateQueue(Queue &q);

bool isEmptyQueue(Queue q);
bool isEmptyAlt2(Queue q);
bool isEmptyAlt3(Queue q); //masih salah

bool isFullQueue(Queue q);
bool isFullAlt2(Queue q);
bool isFullAlt3(Queue q); // masih salah

void enqueue(Queue &q, infotype x);
void enqueueAlt2(Queue &q, infotype x);
void enqueueAlt3(Queue &q, infotype x); // masih salah

infotype dequeue(Queue &q);
infotype dequeueAlt2(Queue &q);
infotype dequeueAlt3(Queue &q); // masih salah

void printinfo(Queue q);

#endif // QUEUE_H_INCLUDED
