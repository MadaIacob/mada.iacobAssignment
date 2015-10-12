#include "gtest/gtest.h"

#include "Arguments.h"

TEST(RegularConstructorTest, Test_appName)
{
	char * arg[3] = {(char *) "nume1" ,(char *) "nume2",(char *) "nume3"};
	Arguments args(3,arg);
	
	EXPECT_EQ("nume1", args.appName());
}

TEST(RegularConstructorTest, Test_count)
{
	char * arg[3] = {(char *) "nume1" ,(char *) "nume2",(char *) "nume3"};
	Arguments args(3,arg);
	
	char * arg2[0] = {};
	Arguments args2(0,arg2);
	
	EXPECT_EQ(2, args.count());
	EXPECT_EQ(0, args2.count());
}

TEST(RegularConstructorTest, Test_negativVector)
{
	char * arg2[0] = {};
	bool isThrow = false;
	try
	{
		Arguments args2(-1,arg2);
	}
	catch(int e)
	{
		isThrow = true;
	}
	
	EXPECT_EQ(true, isThrow);
}

TEST(RegularConstructorTest, Test_zeroVector)
{
	char * arg2[0] = {};
	bool isThrow = false;
	try
	{
		Arguments args2(0,arg2);
	}
	catch(int e)
	{
		isThrow = true;
	}
	
	EXPECT_EQ(true, isThrow);
}

TEST(RegularConstructorTest, Test_nullArgv)
{
	char ** arg= 0;
	bool isThrow = false;
	try
	{
		Arguments args2(3,arg);
	}
	catch(int e)
	{
		isThrow = true;
	}
	
	EXPECT_EQ(true, isThrow);
}