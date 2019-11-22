#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *front = mx_create_node(data);
    t_list *buf = *list;
	
	if (buf == 0) {
		*list  = front;
		return;
	}

    while ( buf->next != NULL)
        buf = buf -> next;
    buf -> next = front;
	
}
