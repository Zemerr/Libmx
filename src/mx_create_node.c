#include "../inc/libmx.h"

t_list *mx_create_node(void *data) {
	t_list *new = (t_list *)malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;
	return new;
}
/*
int main() {
	char *t = "Hello";
	
	t_list *list = mx_create_node(t);
	printf("%s", list->data);
}*/
