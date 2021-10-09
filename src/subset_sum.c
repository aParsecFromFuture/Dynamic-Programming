#include "subset_sum.h"

int SSP(const int* arr, int n, int k)
{
	int i, j, success;
	int* DP;

	DP = (int*)calloc(k + 1, sizeof(int));

	if (!DP) {
		perror("allocation error");
		exit(1);
	}

	DP[0] = 1;

	for (i = 0; i < n; i++) {
		for (j = k; j > 0; j--) {
			if (arr[i] <= j && DP[j - arr[i]]) {
				DP[j] = 1;
			}
		}
	}

	success = DP[k];
	free(DP);
	return success;
}