#include "rod_cutting.h"

int RCP(const int* profit, const int* len, int n, int max_len)
{
	int i, j, max_profit;
	int* DP;

	DP = (int*)calloc(max_len + 1, sizeof(int));

	if (!DP) {
		perror("allocation error");
		exit(1);
	}

	for (i = 0; i < n; i++) {
		for (j = 1; j < (max_len + 1); j++) {
			if(len[i] <= j && DP[j] < DP[j - len[i]] + profit[i]) {
				DP[j] = DP[j - len[i]] + profit[i];
			}
		}
	}

	max_profit = DP[max_len];
	free(DP);
	return max_profit;
}