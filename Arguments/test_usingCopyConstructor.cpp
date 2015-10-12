#include "gtest/gtest.h"

#include "Arguments.h"

TEST(CopyConstructorTest, Test_appName)
{
	char * arg[3] = {(char *) "nume1" ,(char *) "nume2",(char *) "nume3"};
	Arguments args(3,arg);
	Arguments argsCopy(args);
	
	EXPECT_EQ("nume1", args.appName());
	EXPECT_EQ("nume1", argsCopy.appName());
}

TEST(CopyConstructorTest, Test_count)
{
	char * arg[3] = {(char *) "nume1" ,(char *) "nume2",(char *) "nume3"};
	Arguments args(3,arg);
	Arguments argsCopy(args);
		
	EXPECT_EQ(2, args.count());
	EXPECT_EQ(2, argsCopy.count());
}

