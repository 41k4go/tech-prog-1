#include "queue1.h"

unsigned int Queue1::countNum() {
	int H = (getNum() / getAmount());
	unsigned int count = 0;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		if (i->value > H) {
			count++;
		}
	}
	return count;
}
