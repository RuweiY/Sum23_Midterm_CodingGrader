#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
int CountNumberOfSpaces(std::string input) {
	int m = 0;
	char input;
	for(int i = 0; i <= input.size(); i++) {
		if (input[i] == ' ') {
			m++;
			}
	}
}