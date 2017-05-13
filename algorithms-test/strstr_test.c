#include <stdio.h>
#include <string.h>

#include "strstr_test.h"

void test_needle_in_haystack() {
	printf("test_needle_in_haystack-0\n");
	long index = -21;
	char needle[64];
	char haystack[256];
	strcpy(needle, "aaaaaaaab");
	strcpy(haystack, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab");
	unsigned long bigo = 0;

	index = needle_in_haystack(needle, haystack, &bigo);
	printf("test_needle_in_haystack (%s)(%s)(%s)index(%ld)bigo(%lu)\n", needle, haystack, index > 0 ? "YES" : "NO", index, bigo);
}