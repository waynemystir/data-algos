#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "valid_palindrome.h"

bool
is_valid_palindrome(char *str) {
	size_t len = strlen(str);
	if (len == 0) return true;
	int i = 0, j = len - 1;

	while (i < j) {
		char lc = str[i];
		char rc = str[j];
		if (!isalnum(lc)) {
			i++;
			continue;
		}

		if (!isalnum(rc)) {
			j--;
			continue;
		}

		if (tolower(lc) != tolower(rc)) return false;
		i++, j--;
	}

	return true;
}