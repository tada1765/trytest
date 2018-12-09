#include "try_test.h"

char * PrintGreeting(int trigger){
	char * good = "Hello World";
	char * bad = "Who are you";
	
	if(trigger == TRUE)
		return good;
	return bad;
}