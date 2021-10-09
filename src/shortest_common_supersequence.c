#include "shortest_common_supersequence.h"

int SCS(const char* str1, const char* str2)
{
	int i, j, m, n, corner, swap, length;
	int* DP;

	m = 0;
	while (*(str1 + m) != '\0') m++;

	n = 0;
	while (*(str2 + n) != '\0') n++;

	DP = (int*)malloc(sizeof(int) * (n + 1));

	if (!DP) {
		perror("allocation error");
		exit(1);
	}

	for (i = 0; i < (n + 1); i++) {
		DP[i] = i;
	}

	for (i = 1; i < (m + 1); i++) {
		corner = DP[0];
		DP[0] = i;
		for (j = 1; j < (n + 1); j++) {
			swap = DP[j];
			if (str1[i - 1] == str2[j - 1]) {
				DP[j] = corner + 1;
			}
			else if (DP[j] > DP[j - 1]) {
				DP[j] = DP[j - 1] + 1;
			}
			else {
				DP[j] = DP[j] + 1;
			}
			corner = swap;
		}
	}

	length = DP[n];
	free(DP);
	return length;
}