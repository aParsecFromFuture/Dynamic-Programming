#pragma once
#include <stdlib.h>

/*
	DYNAMIC PROGRAMMING APPROACH FOR ROD CUTTING PROBLEM

	ARGS:

	profit:     the array that holds profits of each possible rope piece. for example profit of the ith item is profit[i]
	len:        the array that holds lengths of each possible rope piece. for example length of the ith item is length[i]
	n:          number of items
	max_len:    length of the rope

	RETURN VALUE:

	maximum profit the rope can provide

	COMPLEXITY:

	Time Complexity: O(mn)
	Space Complexity: O(n)

	EXAMPLE:

	int profit[] = {1, 5, 3, 7};
	int len[] = {2, 4, 3, 5};
	int n = 4;
	int max_len = 8;

	RCP(profit, lenth, n, max_len);
 */

int RCP(const int*, const int*, int, int);