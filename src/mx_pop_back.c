#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
	t_list *buf = *head;
	while (buf->next->next != NULL)
		buf = buf->next;
	free(buf->next);
	buf->next = NULL;
	
}
/*
int main() {

   // t_list *p = NULL;


    char s1[6] = "First\0";
    char s2[5] = "Last\0";


    t_list *list = mx_create_node(s1);
    mx_push_front(&list, s2);
	mx_pop_back(&list);
    while (list != NULL) {
        printf("data: %s\n", list->data);

        list = list->next;
    }
  //  mx_push_front(&list, s1);
}*/
	
