#include "queue.h"
int main()
{
    Queue q;
    int x;

    CreateQueue(q);
    printInfo(q);

    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 9);
    printInfo(q);
    cout << endl << endl;

    //x = dequeue(q);
    //x = dequeue(q);
    //printInfo(q);
    return 0;
}
