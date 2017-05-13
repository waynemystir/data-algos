#include <stdio.h>
#include <time.h>
#include <limits.h>

#include "two_sum_test.h"

#define MAX (1*100*1000)
#define RANDON_NUM rand()

int test_two_sum() {
	printf("two_sum begin M(%d)IM(%d)RM(%d)MOD(%d)\n", MAX, INT_MAX, RAND_MAX, RAND_MAX % MAX);

	static int rand_seeded = 0;

	if (!rand_seeded) {
		time_t t;
		srand((unsigned) time(&t));
	}
	rand_seeded = 1;

	// int arr[] = {-17, 29, 3, -134, 189, 10, 20};
	// int count = 7;
	// int sum = 30;
	int count = MAX;
	int arr[MAX] = {0};
	for (int i = 0; i < count; i++)
		arr[i] = RANDON_NUM;
	int x = RANDON_NUM / 2;
	int y = RANDON_NUM / 2;
	int sum = x + y;

	int x_ind = RANDON_NUM % count;
	int y_ind = RANDON_NUM % count;
	arr[x_ind] = x;
	arr[y_ind] = y;
	printf("two_sum prep sum(%d)sumVer(%d)x_ind(%d)x(%d)xia(%d)y_ind(%d)y(%d)yia(%d)\n",
		sum, arr[x_ind] + arr[y_ind], x_ind, x, arr[x_ind], y_ind, y, arr[y_ind]);

	int ret = 0;
	int ind1 = -1;
	int ind2 = -1;
	unsigned long big_o = 0;
	// ret = two_sum(arr, count, sum, &ind1, &ind2, &big_o);
	// printf("two_sum results ret(%d)sum(%d)sumVer(%d)ind1(%d)ind1Val(%d)ind2(%d)ind2Val(%d)bigO(%lu)\n",
	// 	ret, sum, arr[ind1] + arr[ind2], ind1, arr[ind1], ind2, arr[ind2], big_o);

	ind1 = -1;
	ind2 = -1;
	big_o = 0;
	ret = two_sum_hash(arr, count, sum, &ind1, &ind2, &big_o);
	printf("two_sum_hash results ret(%d)sum(%d)sumVer(%d)ind1(%d)ind1Val(%d)ind2(%d)ind2Val(%d)bigO(%lu)\n",
		ret, sum, arr[ind1] + arr[ind2], ind1, arr[ind1], ind2, arr[ind2], big_o);
	return 0;
}