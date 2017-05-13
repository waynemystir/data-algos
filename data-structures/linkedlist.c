#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"

linkedlist_t*
create_linkedlist(bool (*equals)(node_t*, void*)) {
	linkedlist_t *l = malloc(SZ_LINKEDLIST);
	memset(l, '\0', SZ_LINKEDLIST);
	return l;
}

void
get_new_head(linkedlist_t *list, node_t **new_head) {

}

void
get_new_tail(linkedlist_t *list, node_t **new_tail) {
	if (!list || !new_tail) return;

	node_t *nt = malloc(SZ_NODE);
	memset(nt, '\0', SZ_NODE);
	*new_tail = nt;

	if (!list->head) {
		list->head = nt;
		list->tail = nt;
	} else {
		list->tail->next = nt;
		list->tail = nt;
	}

	list->count++;
}

node_t*
remove_tail(linkedlist_t *list) {
	if (!list || !list->tail) return NULL;
	node_t *n = list->head;
	while (n) {
		if (n->next && n->next == list->tail) {
			node_t *old_tail = list->tail;
			n->next = NULL;
			list->tail = n;
			return old_tail;
		}

		n = n->next;
	}

	return NULL;
}