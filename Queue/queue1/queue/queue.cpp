#include "queue.h"

void CreateQueue(Queue &q){
    q.head = -1;
    q.tail = -1;
}
bool isEmptyQueue(Queue q){
    bool hasil = false;

    if(q.head = -1){
        hasil = true;
    }

    return hasil;
}

bool isFullQueue(Queue q){
    bool hasil = false;

    if(q.tail = 4){
        hasil = true;
    }

    return hasil;
}

void enqueue(Queue &q, infotype x){
    if (isEmptyQueue(q) == 1){
        q.head = 0;
        q.tail = 0;
        q.info[0] = x;
    } else {
        if(isFullQueue(q) != 1){
            q.tail = q.tail + 1;
            q.info[q.tail] = x;
        } else {
            cout << "queue penuh" << endl;
        }
    }
}
infotype dequeue(Queue &q){
    if(q.tail == 0){
        q.head = -1;
        q.tail = -1;

        return q.info[0];
    } else {
        int i;
        for(i=(q.head + 1);i<=q.tail;i++){
            q.info[i-1] = q.info[i];
        }
        q.tail = q.tail - 1;
        return q.info[q.tail];
    }
}
void printInfo(Queue q){
    if(q.head != -1){
        cout << "[HEAD] ";
        int i;
        for(i=q.tail;i>=q.head;i--){
            cout << q.info[i] << " ";
        }
    } else {
        cout << "queue kosong" << endl;
    }
}
