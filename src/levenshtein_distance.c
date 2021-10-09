#include "levenshtein_distance.h"

int levenshtein(const char* str1, const char* str2)
{
	int i, j, d, m, n, swap, corner;
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

	for (i = 0; i < m; i++) {
		corner = DP[0];
		DP[0] = i + 1;

		for (j = 1; j < (n + 1); j++) {
			swap = DP[j];
			DP[j] = MIN(
				DP[j - 1] + 1,
				DP[j] + 1,
				corner + ((str1[i] == str2[j - 1]) ? 0 : 1));
			corner = swap;
		}
	}
	
	d = DP[n];
	free(DP);
	return d;
}