#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
	int i = 0;
	while (list != NULL) {
		i++;
		list = list->next;
		
	}
	return i;
}
/*
int main() {
	  char s1[6] = "First\0";
    char s2[5] = "Last\0";


    t_list *list = mx_create_node(s1);
    mx_push_front(&list, s2);
    printf("%d", mx_list_size(list));
 //   while (list != NULL) {
   //     printf("data: %s\n", list->data);

    //    list = list->next;
   // }
//	printf("%d", mx_list_size(list)); 
  //  mx_push_front(&list, s1);
}*/
