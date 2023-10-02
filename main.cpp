#include "vector.cpp"

#include <iostream>
#include <cassert>

int main() {
	Vector<int> avector(5);
	avector.PushBack(4);
	avector[0] = 3;
	assert(avector[0] = 3);
}