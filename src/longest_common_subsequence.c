#include "longest_common_subsequence.h"

int LCS(const char* str1, const char* str2)
{
	int i, j, m, n, corner, length, swap;
	int* DP;

	m = 0;
	while (*(str1 + m) != '\0') m++;

	n = 0;
	while (*(str2 + n) != '\0') n++;
	
	DP = (int*)calloc((n + 1), sizeof(int));
	
	if (!DP) {
		perror("allocation error");
		exit(1);
	}

	for (i = 1; i < (m + 1); i++) {
		corner = DP[0];
		for (j = 1; j < (n + 1); j++) {
			swap = DP[j];
			if (str1[i - 1] == str2[j - 1]) {
				DP[j] = corner + 1;
			}
			else if (DP[j] < DP[j - 1]) {
				DP[j] = DP[j - 1];
			}
			corner = swap;
		}
	}

	length = DP[n];
	free(DP);
	return length;
}