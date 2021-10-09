#pragma once
#include <stdlib.h>

/*
	DYNAMIC PROGRAMMING APPROACH FOR SHORTEST COMMON SUPERSEQUENCE

	ARGS:

	str1:       first string
	str2:       second string

	RETURN VALUE:

	size of the shortest common supersequence

	COMPLEXITY:

	Time Complexity: O(mn)
	Space Complexity: O(n)

	EXAMPLE:

	const char* str1 = "austria";
	const char* str2 = "australia";

	SCS(str1, str2);
 */

int SCS(const char*, const char*);