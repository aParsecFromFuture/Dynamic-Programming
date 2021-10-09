#pragma once
#include <stdlib.h>
#define MIN(x, y, z) ((x < y && x < z)? x : ((y < z)? y : z))

/*
	DYNAMIC PROGRAMMING APPROACH FOR LEVENSHTEIN DISTANCE

	ARGS:

	str1:       first string
	str2:       second string

	RETURN VALUE:

	levenshtein distance of the two strings

	COMPLEXITY:

	Time Complexity: O(mn)
	Space Complexity: O(n)

	EXAMPLE:

	const char* str1 = "austria";
	const char* str2 = "australia";

	levenshtein(str1, str2);
 */

int levenshtein(const char*, const char*);
