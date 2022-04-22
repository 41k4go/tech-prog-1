#pragma once
struct unit {
	int value;
	unit* next;
};

class Queue {
public:
	Queue();
	~Queue ();

	void copyQ(Queue* q1);
	void mergeQ(Queue* q1, Queue* q2);

	void push(int num);
	int pop();
	bool isEmpty();
	unit* getFirstPtr();
	unit* getLastPtr();

protected:
	double getAmount();
	int getNum();
	unit* addElem(unit* elem, int num);
	unit* init(int num);

private:
	double rAmount_;
	int num_;
	unit* first_;
	unit* last_;
};


