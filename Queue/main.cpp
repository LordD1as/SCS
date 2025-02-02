#include <iostream>

#include "Queue.h"

int main()
{
    {
        Queue q1;
        {
            Queue q0;
            q0.enqueue_byte(0);
            q0.enqueue_byte(1);

            q1.enqueue_byte(3);
            q0.enqueue_byte(2);
            q1.enqueue_byte(4);
            printf("%d", q0.dequeue_byte());
            printf("%d\n", q0.dequeue_byte());
            q0.enqueue_byte(5);
            q1.enqueue_byte(6);
            printf("%d", q0.dequeue_byte());
            printf("%d\n", q0.dequeue_byte());
        }
        printf("%d", q1.dequeue_byte());
        printf("%d", q1.dequeue_byte());
        printf("%d\n", q1.dequeue_byte());
    }
}
