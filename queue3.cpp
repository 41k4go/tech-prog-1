#include "queue3.h"

void Queue3::copyQ(Queue3* q1) {
	for (unit* i = q1->getFirstPtr(); i != nullptr; i = i->next) {
		this->push(i->value);
	}
}

void Queue3::mergeQ(Queue3* q1, Queue3* q2) {
	Queue* q = new Queue[1];
	q->mergeQ(q1, q2);

	for (unit* i = q->getFirstPtr(); i != nullptr; i = i->next) {
		this->push(i->value);
	}

	delete[] q;
}

void Queue3::push(int num) {
	Queue::push(num);
}

int Queue3::pop() {
	return Queue::pop();
}

bool Queue3::isEmpty() {
	return Queue::isEmpty();
}

unsigned int Queue3::countNum() {
	int H = (getNum() / getAmount());
	unsigned int count = 0;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		if (i->value > H) {
			count++;
		}
	}
	return count;
}


unit* Queue3::getFirstPtr() {
	return Queue::getFirstPtr();
}

unit* Queue3::getLastPtr() {
	return Queue::getLastPtr();
}