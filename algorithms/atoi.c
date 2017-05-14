#include <stdio.h>
#include <string.h>
#include <math.h>

#include "atoi.h"

void watoi(char *str, int *ri) {
	if (!ri) return;
	*ri = 0;
	for (int i = strlen(str) - 1; i >= 0; i--) {
		char s = str[i];
		int n = s - '0';
		int e = pow(10, (strlen(str) - 1 - i));
		n *= e;
		(*ri) += n;
		printf("GTGT (%c)(%d)(%d)(%d)(%d)\n", s, n, i, e, *ri);
	}
}