#include "unity.h"
#include "try_test.h"

void setUp(void)
{}

void tearDown(void)
{}

void test_try_test_initial_test_of_Greeting(void)
{
	char * good = "Hello World";
	char * bad = "Who are you";
	char * result = PrintGreeting(TRUE);
	
	TEST_ASSERT_EQUAL_STRING(bad, result);  
}