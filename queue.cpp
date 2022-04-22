#include "queue.h"

void Queue::mergeQ(Queue* q1, Queue* q2) {

	for (unit* i = q1->getFirstPtr(); i != nullptr; i = i->next) {
		this->push(i->value);
	}
	for (unit* i = q2->getFirstPtr(); i != nullptr; i = i->next) {
		this->push(i->value);
	}
}

void Queue::copyQ(Queue* q1) {
	for (unit* i = q1->getFirstPtr(); i != nullptr; i = i->next)
		this->push(i->value);

}

unit* Queue::getFirstPtr() {
	return first_;
}

unit* Queue::getLastPtr() {
	return last_;
}

int Queue::pop() {
	num_--;
	unit* temp;
	int x;
	x = first_->value;
	rAmount_ -= 1 / x;
	temp = first_;
	first_ = first_->next;
	delete[] temp;
	return x;
}

void Queue::push(int num) {
	num_++;
	rAmount_ += 1 / num;
	if (isEmpty()) {
		last_ = init(num);
		first_ = last_;
	}
	else {
		last_ = addElem(last_, num);
	}
}

bool Queue::isEmpty() {
	return first_ == nullptr ? true : false;
}

unit* Queue::addElem(unit* elem, int num) {
	unit* temp = new unit[1];
	elem->next = temp;
	temp->value = num;
	temp->next = nullptr;
	return temp;
}

unit* Queue::init(int num) {
	unit* temp = new unit[1];
	temp->value = num;
	temp->next = nullptr;
	return temp;
}

Queue::Queue() {
	num_ = 0;
	rAmount_ = 0;
	first_ = nullptr;
	last_ = nullptr;
}

Queue::~Queue() {
	while (first_ != nullptr) {
		auto next = first_->next;
		delete first_;
		first_ = next;
	}
	first_ = last_ = nullptr;
}

double Queue::getAmount() {
	return rAmount_;
}

int Queue::getNum() {
	return num_;
}