#include "pch.h"
#include "RuleLogic.h"
#include "gmock/gmock.h"

class TestMock : public RuleLogic {
public:
	MOCK_METHOD(void, logic, (int, char, int));
};

TEST(RuleLogicTest, Add) {
	TestMock rule;
	EXPECT_CALL(rule, logic(1, '+', 2)).Times(1);
	rule.logic(1, '+', 2);
}

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}