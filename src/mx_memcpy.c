#include "../inc/libmx.h"


void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	char *dst_ = (char *) dst;
	char *src_ = (char *) src;
	unsigned long  i = 0;

	if (n <= 0)
		return dst; 
	for (; src_[i] != '\0' && i < n; i++) {
		dst_[i] = src_[i];
	}
	dst_[i] = '\0';
	return dst;
}
/*
int main() {
	int  dst = 0;
	int src = 15555;
	size_t p = 4;
	printf("%s\n", mx_memcpy(&dst, &src, p));
	printf("%s", memcpy(&dst, &src, p));
}*/
