#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
	char *s_ = (char *) s;
	int len = mx_strlen(s_);
	for (unsigned int i = len; i >= 0 && n > len - i; i--) {
		if (s_[i+1] == c) {
			s_ = s_ + (len - i);
			return s_;
		}
	}
	return NULL;
}
