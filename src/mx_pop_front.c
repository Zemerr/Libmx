#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
	t_list *buf = *head;	
	buf = buf->next;
	free(*head);
	*head = buf;
	
}
