#include "queue.h"

int main()
{
    cout << "Hello world!" << endl;
    cout << "----------------------" << endl;
    cout << " H - T   | Queue Info " << endl;
    cout << "----------------------" << endl;
    Queue q;
    infotype x;
    CreateQueue(q);
    printinfo(q);
    enqueue(q, 5); printinfo(q);
    enqueue(q, 2); printinfo(q);
    enqueue(q, 7); printinfo(q);
    x = dequeue(q); printinfo(q);
    x = dequeue(q); printinfo(q);
    enqueue(q, 4); printinfo(q);
    x = dequeue(q); printinfo(q);
    x = dequeue(q); printinfo(q);

    cout << endl << endl;

    cout << "Hello world!" << endl;
    cout << "----------------------" << endl;
    cout << " H - T   | Queue Info " << endl;
    cout << "----------------------" << endl;
    CreateQueue(q);
    printinfo(q);
    enqueueAlt2(q, 5); printinfo(q);
    enqueueAlt2(q, 2); printinfo(q);
    enqueueAlt2(q, 7); printinfo(q);
    x = dequeueAlt2(q); printinfo(q);
    x = dequeueAlt2(q); printinfo(q);
    enqueueAlt2(q, 4); printinfo(q);
    x = dequeueAlt2(q); printinfo(q);
    x = dequeueAlt2(q); printinfo(q);

    cout << endl << endl;

    cout << "Hello world!" << endl;
    cout << "----------------------" << endl;
    cout << " H - T   | Queue Info " << endl;
    cout << "----------------------" << endl;
    CreateQueue(q);
    printinfo(q);
    enqueueAlt3(q, 5); printinfo(q);
    enqueueAlt3(q, 2); printinfo(q);
    enqueueAlt3(q, 7); printinfo(q);
    x = dequeueAlt3(q); printinfo(q);
    x = dequeueAlt3(q); printinfo(q);
    enqueueAlt3(q, 4); printinfo(q);
    x = dequeueAlt3(q); printinfo(q);
    x = dequeueAlt3(q); printinfo(q);

    return 0;
}
