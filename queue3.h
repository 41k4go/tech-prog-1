#pragma once

#include "queue.h"

class Queue3 : private Queue {
public:
	unsigned int countNum();

	void copyQ(Queue3* q1);
	void mergeQ(Queue3* q1, Queue3* q2);

	void push(int num);
	int pop();
	bool isEmpty();

	unit* getFirstPtr();
	unit* getLastPtr();
};
