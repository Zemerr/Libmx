#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *front = mx_create_node(data);
    t_list *buf = *list;
    while ( buf->next != NULL)
        buf = buf -> next;
    buf -> next = front;
	
}
/*
int main() {

   // t_list *p = NULL;


    char s1[6] = "First\0";
    char s2[5] = "Last\0";


    t_list *list = mx_create_node(s1);
    mx_push_back(&list, s2);
    while (list != NULL) {
        printf("data: %s\n", list->data);

        list = list->next;
    }
  //  mx_push_front(&list, s1);
}*/
