#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	int i = 0;
	t_list *buf = NULL;
	void  *tmp = NULL;

	while (i == 0) {
		i = 1;
		buf = lst;
		while (buf->next != NULL) {
			if (cmp(buf->data, buf->next->data) == true) {
				tmp = buf->data;
				buf->data = buf->next->data;
				buf->next->data = tmp;
				
				i = 0;
			}
		buf = buf->next;
		}
	}
	return lst;
}
