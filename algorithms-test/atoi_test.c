#include <stdio.h>

#include "atoi_test.h"

void test_atoi() {
	char str[] = "12345";
	int ri;
	watoi(str, &ri);
	printf("ATOI (%d)\n", ri);
}