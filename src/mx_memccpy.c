#include "../inc/libmx.h"
//#include <string.h>

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	char *dst_ = (char *) dst;
    char *src_ = (char *) src;
    unsigned long  i = 0;
    for (; src_[i] != '\0' && i < n; i++) {
		
        dst_[i] = src_[i];
		if (src_[i-1] == c && c != 0)
			break;
    }
    dst_[i] = '\0';
    return dst;
}

/*
int main() {
	unsigned char src[15]="1234567890";

   // Массив приемник данных
   unsigned char dst[15]="";
	unsigned char dst1[15]="";
//	void qwe[15] = memccpy(dst, src, 0, 10);
//	printf("%s\n", qwe);
   // Копируем данные из массива src в массив dst
	memccpy (dst, src, 2, 10);
 	printf ("dst: %s\n", dst);
	mx_memccpy (dst1, src, 2, 10);
	printf ("dst: %s\n", dst1);
	
	
}*/
