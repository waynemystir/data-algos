#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*
reverse_words(char *str) {

	unsigned long last_word_break = strlen(str);
	char *reversed_word = malloc(strlen(str));
	memset(reversed_word, '\0', strlen(str));

	for (int i = strlen(str) - 1; i >= 0; i--) {
		if (i == 0 || str[i - 1] == ' ') {
			int new_word_len = last_word_break - i;
			char new_word[new_word_len + 1];
			memset(new_word, '\0', new_word_len + 1);
			memcpy(new_word, &str[i], new_word_len);
			strcat(reversed_word, new_word);
			if (i > 0) strcat(reversed_word, " ");
			last_word_break = i - 1;
		}
	}

	return reversed_word;
}