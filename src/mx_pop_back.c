#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
	t_list *buf = *head;
	while (buf->next->next != NULL)
		buf = buf->next;
	free(buf->next);
	buf->next = NULL;
	
}
