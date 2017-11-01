#include "..\TStack\TStack.h"

#include "gtest.h"

TEST(TStack, can_create_stack_with_positive_length)
{
	ASSERT_NO_THROW(TStack<int>(6));
}

TEST(TStack, throws_when_create_stack_with_negative_length)
{
	ASSERT_ANY_THROW(TStack<int>(-6));
}

TEST(TStack, can_create_copied_stack)
{
	TStack<int> St(5);
	ASSERT_NO_THROW(TStack<int> St1(St));
}

TEST(TStack, throws_when_pop_empty_stack)
{
	TStack<int> St(0);
	ASSERT_ANY_THROW(St.Pop());
}



