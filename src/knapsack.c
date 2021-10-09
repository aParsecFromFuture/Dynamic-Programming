#include "knapsack.h"

int knapsack(const int* profit, const int* weight, int n, int capacity)
{
	int i, j, max_profit;
	int* DP;

	DP = (int*)calloc(capacity + 1, sizeof(int));

	if (!DP) {
		perror("allocation error");
		exit(1);
	}

	for (i = 0; i < n; i++) {
		for (j = capacity; j > 0; j--) {
			if (weight[i] <= j && DP[j] < DP[j - weight[i]] + profit[i]) {
				DP[j] = DP[j - weight[i]] + profit[i];
			}
		}
	}

	max_profit = DP[capacity];
	free(DP);
	return max_profit;
}