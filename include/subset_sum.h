#pragma once
#include <stdlib.h>

/*
	DYNAMIC PROGRAMMING APPROACH FOR SUBSET SUM PROBLEM

	ARGS:

	arr:        the array we will search for the subset sum
	n:          length of the array
	k:          the subset sum search for

	RETURN VALUE:

	returns 1 if subset found, 0 otherwise

	COMPLEXITY:

	Time Complexity: O(mn)
	Space Complexity: O(n)

	EXAMPLE:

	int arr[] = { 2, 6, 4, 8, 0, 10 };
	int n = 6;
	int k = 20;

	SSP(arr, n, k);
 */

int SSP(const int*, int, int);