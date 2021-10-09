#include "longest_increasing_subsequence.h"

int* LICS(const int* arr, int len, int* seq_len) {
	int i, j;
	int* lis, * seq;

	lis = (int*)malloc(sizeof(int) * len);

	if (!lis) {
		perror("allocation error");
		exit(1);
	}

	for (i = 0; i < len; i++)
		lis[i] = 1;

	for (i = 0; i < len; i++)
		for (j = 0; j < i; j++) {
			if (arr[j] < arr[i] && lis[j] >= lis[i])
				lis[i] = lis[j] + 1;
		}

	seq = (int*)malloc(sizeof(int) * lis[len - 1]);
	*seq_len = lis[len - 1];

	if (!seq) {
		free(lis);
		perror("allocation error");
		exit(1);
	}

	j = lis[len - 1];

	for (i = (len - 1); i >= 0; i--) {
		if (lis[i] == j) {
			seq[j - 1] = arr[i];
			j--;
		}
	}

	free(lis);
	return seq;
}