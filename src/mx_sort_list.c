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
/*
int main() {
    char s[] = "aaaa";
    char s1[] = "bbbbb";
    char s2[] = "cccccc";
    char s3[] = "ddddddd";
    char s4[] = "eeeeeeee";
    char s5[] = "fffffffff";
    char s6[] = "gggggggggg";

    t_list *list = mx_create_node(s);

    mx_push_front(&list, s1);
    mx_push_front(&list, s5);
    mx_push_front(&list, s3);
    mx_push_front(&list, s2);
    mx_push_front(&list, s6);
    mx_push_front(&list, s4);
    mx_sort_list(list, cmp);
    while (list != NULL) {
        printf("%s ",  list->data);
        list = list->next;
    }
return 0;
}*/
