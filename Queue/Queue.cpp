#include "Queue.h"

#include <iostream>

void Queue::on_out_of_memory()
{
	printf("Out of the memory!\n");
}

void Queue::on_illegal_operation()
{
	printf("Illegal operation!\n");
}

void Queue::enqueue_byte(unsigned char byte)
{	
	if (first_index == INVALID_INDEX)
	{
		first_index = ++last_index;
		data[first_index] = byte;
	}
	else if (++last_index >= MAX_SIZE)
	{
		on_out_of_memory();
		return;
	}
	else
	{
		data[last_index] = byte;
	}
}

unsigned char Queue::dequeue_byte()
{
	if (first_index == INVALID_INDEX)
	{
		on_illegal_operation();
		return INVALID_CHAR;
	}

	return data[first_index++];
}
