#pragma once

#define MAX_SIZE 2048
#define INVALID_INDEX -1
#define INVALID_CHAR 255

class Queue
{
private:
    unsigned char data[MAX_SIZE];
    int first_index = INVALID_INDEX;
    int last_index = INVALID_INDEX;

    void on_out_of_memory();
    void on_illegal_operation();

public:
    // Adds a new byte to a queue
    void enqueue_byte(unsigned char byte);

    // Pops the next byte off the FIFO queue
    unsigned char dequeue_byte();
};
