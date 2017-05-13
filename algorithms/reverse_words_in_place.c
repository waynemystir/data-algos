#include <string.h>

#include "reverse_words_in_place.h"

void
reverse(char *str, int begin, int end) {
	for (int i = 0; i < (end - begin)/2; i++) {
		char temp = str[begin + i];
		str[begin + i] = str[end - i - 1];
		str[end - i - 1] = temp;
	}
}

void
reverse_words_in_place(char *str) {
	reverse(str, 0, strlen(str));
	for (int i = 0, j = 0; j <= strlen(str); j++) {
		if (j == strlen(str) || str[j] == ' ') {
			reverse(str, i, j);
			i = j + 1;
		}
	}
}