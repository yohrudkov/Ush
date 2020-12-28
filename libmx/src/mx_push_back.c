#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
	t_list *current = *list;

	t_list *node = (t_list *)malloc(sizeof(t_list));
	node->data = mx_strdup(data);
	node->next = NULL;

	if (current == NULL) *list = node;
	else {
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = node;
	}
}
