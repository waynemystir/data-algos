#include <stdio.h>
#include <string.h>

#include "strstr.h"

long
needle_in_haystack(char *needle, char *haystack, unsigned long *bigo) {
	for (size_t i = 0; ; i++) {
		for (size_t j = 0; ; j++) {
			if (bigo) (*bigo)++;
			if (j == strlen(needle)) return i;
			if (i + j == strlen(haystack)) return -1;
			if (needle[j] != haystack[i + j]) break;
		}
	}
}