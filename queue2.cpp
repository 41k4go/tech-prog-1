#include "queue2.h"

void Queue2::copyQ(Queue2* q1) {

	for (unit* i = q1->getFirstPtr(); i != nullptr; i = i->next) {
		this->push(i->value);
	}
}

void Queue2::mergeQ(Queue2* q1, Queue2* q2) {
	Queue* q = new Queue[1];
	q->mergeQ(q1, q2);

	for (unit* i = q->getFirstPtr(); i != nullptr; i = i->next) {
		this->push(i->value);
	}
	delete[] q;
}

void Queue2::push(int num) {
	Queue::push(num);
}

int Queue2::pop() {
	return Queue::pop();
}

bool Queue2::isEmpty() {
	return Queue::isEmpty();
}

unsigned int Queue2::countNum() {
	int H = (getNum() / getAmount());
	unsigned int count = 0;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		if (i->value > H) {
			count++;
		}
	}
	return count;
}

unit* Queue2::getFirstPtr() {
	return Queue::getFirstPtr();
}

unit* Queue2::getLastPtr() {
	return Queue::getLastPtr();
}