#include <stdio.h>

#include "two_sum_test.h"
#include "valid_palindrome_test.h"
#include "strstr_test.h"
#include "reverse_words_test.h"
#include "reverse_words_in_place_test.h"

int main() {
	printf("main-0\n");
	test_two_sum();
	test_valid_palindrome();
	test_needle_in_haystack();
	test_reverse_words();
	test_reverse_words_in_place();
	return 0;
}