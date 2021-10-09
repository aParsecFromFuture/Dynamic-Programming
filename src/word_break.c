#include "word_break.h"

int WBP(const char* str1, const char* const * dict, int dict_size)
{
	int i, j, k, l, n, success;
	int* DP;

	n = 0;
	while (*(str1 + n) != '\0') n++;

	DP = (int*)calloc(n + 1, sizeof(int));

	if (!DP) {
		perror("allocation error");
		return 0;
	}

	DP[0] = 1;

	for (i = 1; i < (n + 1); i++) {
		for (j = i - 1; j >= 0; j--) {
			if (DP[j]) {
				for (k = 0; k < dict_size; k++) {
					l = 0;
					while (l < (i - j) && dict[k][l] && dict[k][l] == str1[j + l])
						l++;

					if (l == (i - j) && !dict[k][l]) {
						DP[i] = 1;
						k = dict_size;
						j = -1;
					}
				}
			}
		}
	}

	success = DP[n];
	free(DP);
	return success;
}