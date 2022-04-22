#include <iostream>

#include "queue1.h"
#include "queue2.h"
#include "queue3.h"

int check() {
	int temp;
	std::cin >> temp;
	while (std::cin.fail() || std::cin.get() != '\n') {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.sync();
		std::cout << "Enter again: ";
		std::cin >> temp;
	}
	return temp;
}

template <typename T>
int queue(int var) {
	int choice;
	T q1, q2, q3;
	do {
		switch (var)
		{
		case 1:
			std::cout << "\nPublic\n" << std::endl;
			break;
		case 2:
			std::cout << "\nProtected\n" << std::endl;
			break;
		case 3:
			std::cout << "\nPrivate\n" << std::endl;
			break;
		default:
			break;
		}
		std::cout << "Select action:\n" << "1. Push\n" << "2. Pop\n" << "3. Show\n" << "4. The number of elements is greater than the average harmonic value\n" << 
			"5. Copy\n" << "6. Merge\n" << "7. Exit\n" << "\nYour choice: ";
		choice = check();
		switch (choice)
		{
		case 1:
			std::cout << "Push\nEnter value to push: ";
			choice = check();
			q1.push(choice);
			break;
		case 2:
			std::cout << "Pop\nValue: " << q1.pop() << std::endl;
			break;
		case 3:
			std::cout << "Show\nQueue1: " << std::endl;
			for (unit* i = q1.getFirstPtr(); i != nullptr; i = i->next) {
				std::cout << i->value << "\t";
			}
			std::cout << "\n";
			std::cout << "\nQueue 2: " << std::endl;
			if (!q2.isEmpty()) {
				for (unit* i = q2.getFirstPtr(); i != nullptr; i = i->next) {
					std::cout << i->value << "\t";
				}
			}
			std::cout << "\n";
			std::cout << "\nQueue 3: " << std::endl;
			if (!q3.isEmpty()) {
				for (unit* i = q3.getFirstPtr(); i != nullptr; i = i->next) {
					std::cout << i->value << "\t";
				}
			}
			std::cout << std::endl;

			break;
		case 4:
			std::cout << "Count: " << q1.countNum() << std::endl;
			break;
		case 5:
			std::cout << "Copy" << std::endl;
			q2.copyQ(&q1);
			break;
		case 6:
			q3.mergeQ(&q1, &q2);
			break;
		case 7:
			return 1;
		default:
			break;
		}
	} while (true);

}

int main() {
	int var;
	std::cout << "1. Public\n" << "2. Protected\n" << "3. Private" << std::endl;
	var = check();
	switch (var) {
	case 1:
		return queue<Queue1>(var);
		break;
	case 2:
		return queue<Queue2>(var);
		break;
	case 3:
		return queue<Queue3>(var);
		break;
	default:
		return 1;
	}
	return 0;
}