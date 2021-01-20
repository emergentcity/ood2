#include <iostream>
#include "RuleLogic.h"

using namespace std;

void RuleLogic::logic(int num1, char x, int num2) {

	switch (x) {
	case '+':
		cout << addition(num1, num2);
		break;
	}
}