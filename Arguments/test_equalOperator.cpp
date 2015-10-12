#include "gtest/gtest.h"

#include "Arguments.h"

TEST(EqualOperatorTest, Test_equal)
{
	char * arg[3] = {(char *) "nume1" ,(char *) "nume2",(char *) "nume3"};
	char * arg2[1] = {(char *) "arg2"};
	
	Arguments arguments(3,arg);	
	Arguments arguments2(1,arg2);	
	
	arguments2 = arguments;
	
	EXPECT_EQ(arguments2.appName(), arguments.appName());
	EXPECT_EQ(arguments2.count(), arguments.count());
	
	for(int i = 0 ; i < 2 ; i++)
	{
		EXPECT_EQ(arguments[i] , arguments2[i]);
	} 
}


