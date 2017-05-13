#include <stdio.h>
#include <string.h>

#include "valid_palindrome_test.h"

#define TEST_STR_MAX_LEN 256

char test_strs[][TEST_STR_MAX_LEN] = {
	"wayaw",
	"basketball is fun",
	"",
	"Wayne^&*(^%$$EnYaw",
	"so if football",
	"racecar",
	"I like almonds",
	"r a   ce ca  r",
	"And watermelon",
	"123443     21",
	"kaya k",
	"Rats live on no evil star",
	"abcdefgfdcba",
	"Live on time, emit no evil"
};

void test_valid_palindrome() {
	size_t num_test_strs = sizeof(test_strs) / TEST_STR_MAX_LEN;
	printf("test_valid_palindrome-0 (%d)(%lu)(%lu)\n", TEST_STR_MAX_LEN, sizeof(test_strs), num_test_strs);
	char str[256] = {0};
	bool b = false;

	for (int i = 0; i < num_test_strs; i++) {
		strcpy(str, test_strs[i]);
		b = is_valid_palindrome(str);
		printf("test_valid_palindrome (%s)(%s)\n", str, b ? "YES" : "NO");
	}

}