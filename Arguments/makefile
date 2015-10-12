
RM = rm

CPPTOOL = g++
CPPFLAGS = -Wall

CPP = $(CPPTOOL) $(CPPFLAGS) -c
LINK = $(CPPTOOL) -o

GTEST_DIR=C:\gtest-1.7.0

GTEST_LIB=$(GTEST_DIR)\make\gtest_main.a

GTEST_INC=-isystem $(GTEST_DIR)\include

TESTS=\
	test_usingCopyConstructor.o \
	test_usingRegularConstructor.o \
	test_subscriptOperator.o \
	test_equalOperator.o

all: main.exe

test: test.exe main.exe
	test.exe
	
main.exe: main.o Arguments.o
	$(LINK) main.exe main.o Arguments.o

main.o: main.cpp Arguments.h
	$(CPP) main.cpp

Arguments.o: Arguments.cpp Arguments.h
	$(CPP) Arguments.cpp

test_usingRegularConstructor.o: test_usingRegularConstructor.cpp
	$(CPPTOOL) $(CPPFLAGS) -Iinc $(GTEST_INC) -c test_usingRegularConstructor.cpp

test_usingCopyConstructor.o: test_usingCopyConstructor.cpp
	$(CPPTOOL) $(CPPFLAGS) -Iinc $(GTEST_INC) -c test_usingCopyConstructor.cpp
	
test_subscriptOperator.o: test_subscriptOperator.cpp
	$(CPPTOOL) $(CPPFLAGS) -Iinc $(GTEST_INC) -c test_subscriptOperator.cpp
	
test_equalOperator.o: test_equalOperator.cpp
	$(CPPTOOL) $(CPPFLAGS) -Iinc $(GTEST_INC) -c test_equalOperator.cpp
		
test.exe: Arguments.o $(TESTS) $(GTEST_LIB)
	$(CPPTOOL) -o test.exe $(TESTS) Arguments.o $(GTEST_LIB)
	
clean:
	$(RM) *.o
	$(RM) *.exe
