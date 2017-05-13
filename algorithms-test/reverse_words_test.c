#include <stdio.h>
#include <stdlib.h>

#include "reverse_words_test.h"

void test_reverse_words() {
	char *revved = reverse_words("articial intelligence will be the future of computing I"
		"like apples and oranges I also like steak bacon and ground beef");
	printf("reversed (%s)\n", revved);
	free(revved);
}