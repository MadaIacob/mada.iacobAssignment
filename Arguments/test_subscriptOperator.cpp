#include "gtest/gtest.h"

#include "Arguments.h"

#include <string>
#include <iostream>

using namespace std;

TEST(SubscriptOperatorTest, Test_outOfRange)
{
	char * arg[3] = {(char *) "nume1" ,(char *) "nume2",(char *) "nume3"};
	
	Arguments arguments(3,arg);
	
	bool isThrow = false;
	try
	{
		string name = arguments[8];
	}
	catch(size_t e)
	{
		isThrow = true;
	}
	
	ASSERT_EQ(isThrow,true);
}

TEST(SubscriptOperatorTest, Test_inRange)
{
	char * arg[3] = {(char *) "nume1" ,(char *) "nume2",(char *) "nume3"};
	
	Arguments arguments(3,arg);
	
	bool isThrow = false;
	try
	{
		string name = arguments[1];
	}
	catch(size_t e)
	{
		isThrow = true;
	}
	
	ASSERT_EQ(isThrow,false);
}

