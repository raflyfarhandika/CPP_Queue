#include "queue.h"

void CreateQueue(Queue &q){
    q.head = -1;
    q.tail = -1;
}

bool isEmptyQueue(Queue q){
    if(q.head == -1 && q.tail == -1){
        return true;
    } else {
        return false;
    }
}

bool isEmptyAlt2(Queue q)
{
    if(q.head == -1 && q.tail == -1)
    {
        return true;
    } else
    {
        return false;
    }
}

bool isEmptyAlt3(Queue q) // masih salah
{
    if(q.head == -1 && q.tail == -1)
    {
        return true;
    } else
    {
        return false;
    }
}

bool isFullQueue(Queue q){
    if(q.head == 0 && q.tail == 4){
        return true;
    } else {
        return false;
    }
}

bool isFullAlt2(Queue q)
{
    if(q.head == 0 && q.tail == 4)
    {
        return true;
    } else
    {
        return false;
    }
}

bool isFullAlt3(Queue q) //masih salah
{
    if((q.head == 0 && q.tail == 4) || ((q.head = (q.tail + 1))))
    {
        return true;
    } else
    {
        return false;
    }
}

void enqueue(Queue &q, infotype x){
    if(isEmptyQueue(q) == true){
        q.head = 0;
        q.tail = 0;
        q.info[q.tail] = x;
    } else {
        if(isFullQueue(q) != true){
            q.tail = q.tail + 1;
            q.info[q.tail] = x;
        } else {
            cout << "Queue penuh" << endl;
        }
    }
}

void enqueueAlt2(Queue &q, infotype x)
{
    if(isEmptyQueue(q) == true){
        q.head = 0;
        q.tail = 0;
        q.info[q.tail] = x;
    } else {
        if(isFullQueue(q) != true){
            q.tail = q.tail + 1;
            q.info[q.tail] = x;
        } else {
            cout << "Queue penuh" << endl;
        }
    }
}


void enqueueAlt3(Queue &q, infotype x) // masih salah
{
    if(isFullAlt3(q))
    {
        cout << "Queue Penuh" << endl;
    } else if(isEmptyAlt3(q) == true)
    {
        q.head = q.head + 1;
        q.tail = q.tail + 1;
        if (q.tail == 4)
        {
            q.tail = 0;
        } else
        {
            q.tail = q.tail + 1;
        }
        q.info[q.tail] = x;
    }
}

infotype dequeue(Queue &q){
    infotype x;
    if(q.tail == 0){
        x = q.info[0];
        q.head = -1;
        q.tail = -1;
    } else if (q.tail != 0){
        int i, y, x;
        y = q.head;
        x = q.info[y];
        for(i=q.head;i<=q.tail;i++){
            q.info[i] = q.info[i+1];
        }
        q.tail = q.tail - 1;
    } else {
        cout << "Queue kosong" << endl;
    }
    return x;
}

infotype dequeueAlt2(Queue &q)
{
    infotype x;
    if(q.tail == q.head)
    {
        x = q.info[q.head];
        q.head = -1;
        q.tail = -1;
    } else if(q.head != q.tail)
    {
        x = q.info[q.head];
        q.head = q.head + 1;
    } else
    {
        cout << "Queue kosong" << endl;
    }
    return x;
}

infotype dequeueAlt3(Queue &q) //masih salah
{
    infotype x;
    if(isEmptyAlt3(q))
    {
        cout << "Stack Kosong" << endl;
    } else
    {
        if(q.tail == q.head)
        {
            x = q.info[q.head];
            q.head = -1;
            q.tail = -1;
        } else if(q.head = 4 && q.tail != q.head)
        {
            x = q.info[q.head];
            q.head = 0;
        } else {
            x = q.info[q.head];
            q.head = q.head + 1;
        }
    }
    return x;
}

void printinfo(Queue q){
    if(q.head == -1 && q.tail == -1){
        cout << " " << q.head << " - " << q.tail << " | " << "empty queue" << endl;
    } else {
        int i;
        for (i = q.head; i <= q.tail; i++){
        }
        cout << " " << q.head << " - " << q.tail << "   | ";

        for (i = q.head; i <= q.tail; i++){
            cout << q.info[i] << " ";
        }
        cout << endl;
    }
}
