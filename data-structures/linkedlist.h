#include <stdbool.h>

typedef struct node {
	void *data;
	struct node *next;
} node_t;

typedef struct linkedlist {
	node_t *head;
	node_t *tail;
	long count;
} linkedlist_t;

linkedlist_t*
create_linkedlist(bool (*equals)(node_t*, void*));

void
get_new_head(linkedlist_t *list, node_t **new_head);

void
get_new_tail(linkedlist_t *list, node_t **new_tail);

node_t*
remove_tail(linkedlist_t *list);

#define SZ_NODE sizeof(node_t)
#define SZ_LINKEDLIST sizeof(linkedlist_t)