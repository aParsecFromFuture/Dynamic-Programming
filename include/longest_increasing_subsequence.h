#pragma once
#include <stdlib.h>

/*
	DYNAMIC PROGRAMMING APPROACH FOR LONGEST INCREASING SUBSEQUENCE PROBLEM

	ARGS:

	arr:            the array we will search for the longest increasing subsequence
	len:            length of the array
	seq_len:        length of the longest increasing subsequence (the algorithm will set it)

	RETURN VALUE:

	the longest increasing subsequence

	COMPLEXITY:

	Time Complexity: O(mn)
	Space Complexity: O(n)

	EXAMPLE:

	int arr[] = { 2, -6, 4, -8, 0, 10 };
	int len = 6;
	int seq_len;

	LICS(arr, len, &seq_len);
 */

int* LICS(const int*, int, int*);