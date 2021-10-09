#pragma once
#include <stdlib.h>

/*
	DYNAMIC PROGRAMMING APPROACH FOR WORD BREAK PROBLEM

	ARGS:

	str1:           the string we want to split into parts
	dict:           dictionary
	dict_size:      size of dictionary

	RETURN VALUE:

	returns 1 if str1 can be splitted, 0 otherwise

	COMPLEXITY:

	Time Complexity: O(mn)
	Space Complexity: O(n)

	EXAMPLE:

	const char* str1 = "australia";
	const char* dict = { "lia", "au", "fe", "stra", "tr" };
	int dict_size = 5;

	WBP(str1, dict, dict_size);
 */

int WBP(const char*, const char* const *, int);