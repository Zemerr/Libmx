#include "../inc/libmx.h"
//#include <string.h>

void *mx_memchr(const void *s, int c, size_t n) {
	char *s_ = (char *) s;
	for (unsigned long i = 0; *s_ != 0 && i < n; s_++ && i++) {
		if (*s_ == c)
		//	return (void *) s;
			return s_;
	}
	return NULL;
}
/*	
int main() {
	unsigned char src[15]="1234567890";
	char *sym =  mx_memchr (src, '4', 10);
	sym[0] = '!';
	printf("%s", src);
}*/	
