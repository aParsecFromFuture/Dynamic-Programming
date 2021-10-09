#pragma once
#include <stdlib.h>

/*
	DYNAMIC PROGRAMMING APPROACH FOR LONGEST COMMON SUBSEQUENCE PROBLEM

	ARGS:

	str1:       first string
	str2:       second string

	RETURN VALUE:

	size of the longest common subsequence

	COMPLEXITY:

	Time Complexity: O(mn)
	Space Complexity: O(n)

	EXAMPLE:

	const char* str1 = "austria";
	const char* str2 = "australia";

	LCS(str1, str2);
 */

int LCS(const char*, const char*);