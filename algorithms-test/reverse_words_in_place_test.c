#include <stdio.h>

#include "reverse_words_in_place_test.h"

void
test_reverse_words_in_place() {
	char w[] = "the quick brown fox jumps over the lazy dog";
	reverse_words_in_place(w);
	printf("RVIP (%s)\n", w);
}