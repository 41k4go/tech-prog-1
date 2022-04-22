#pragma once
#include "queue.h"

class Queue2 : protected Queue {
public:
	unsigned int countNum();

	void copyQ(Queue2* q1);
	void mergeQ(Queue2* q1, Queue2* q2);

	void push(int num);
	int pop();
	bool isEmpty();
	unit* getFirstPtr();
	unit* getLastPtr();
};
