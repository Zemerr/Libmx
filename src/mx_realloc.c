#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	char *temp;
	char *ptr_ = (char *) ptr;
	int len = mx_strlen(ptr_);
	if (ptr == NULL)
		ptr = mx_strnew(size);
	else if (ptr != NULL && size == 0)
		ptr = mx_strnew(size);
	else if (ptr != NULL && size > 0) {
		temp = mx_strnew(len);
		temp = mx_memcpy(temp, ptr, len);
//		free(ptr);
		ptr = mx_strnew(size);
		ptr = mx_memcpy(ptr, temp, len); 
		
		free(temp);
	}
	return ptr;
}
/*
int main() {
	
	char *str;
	char *new = NULL;
    str = mx_strnew(14);
    str = mx_strcpy(str, "tutorialspoint");
    printf("String = %s\n", str);
    new =  mx_realloc(str, 20);
	
  
    printf("String = %s\n", new);
    free(str);
 }*/
	
