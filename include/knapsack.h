#pragma once
#include <stdlib.h>

/*
	DYNAMIC PROGRAMMING APPROACH FOR 0-1 KNAPSACK PROBLEM

	ARGS:

	profit:     the array that holds profits of each item. for example profit of ith item is profit[i]
	weight:     the array that holds weights of each item. for example weight of ith item is weight[i]
	n:          number of items
	capacity:   maximum weight the knapsack can carry

	RETURN VALUE:

	maximum profit the knapsack can carry

	COMPLEXITY:

	Time Complexity: O(mn)
	Space Complexity: O(n)

	EXAMPLE:

	int profit[] = {1, 5, 3, 7};
	int weight[] = {2, 4, 3, 5};
	int n = 4;
	int capacity = 8;

	knapsack(profit, weight, n, capacity);
 */

int knapsack(const int*, const int*, int, int);
