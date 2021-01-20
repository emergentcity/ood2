#pragma once
#ifndef RULELOGIC_H
#define RULELOGIC_H
#include <string>
#include <algorithm>
#include "CalcFunc.h"

class RuleLogic : CalcFunc
{
public:
	virtual void logic(int, char, int);
};
#endif