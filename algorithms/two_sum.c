#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "two_sum.h"

int two_sum(int arr[], int n, int sum, int *ind1, int *ind2, unsigned long *big_o) {
	for (int j = 0; j < n; j++) {
		for (int k = j + 1; k < n; k++) {
			if (big_o) (*big_o)++;
			if (arr[j] + arr[k] == sum) {
				if (ind1) *ind1 = j;
				if (ind2) *ind2 = k;
				return 1;
			}
		}
	}
	return 0;
}

int two_sum_hash(int arr[], int n, int sum, int *ind1, int *ind2, unsigned long *big_o) {
	int temp = 0;
	Hashmap *myHashMap = hashmapCreate(256, default_hash_int, default_equals_ints);

	for (int j = 0; j < n; j++) {
		if (big_o) (*big_o)++;
		temp = sum - arr[j];
		void *value = hashmapGet(myHashMap, (void*)&temp);
		if (value) {
			if (ind1) *ind1 = *(int*)value;
			if (ind2) *ind2 = j;
			hashmapFree(myHashMap, false, true);
			return 1;
		}
		int *val = malloc(sizeof(int));
		*val = j;
		hashmapPut(myHashMap, &arr[j], val);
		// hashmapForEach(myHashMap, default_print_hash_map_ints, NULL);
	}
	hashmapFree(myHashMap, false, true);
	return 0;
}