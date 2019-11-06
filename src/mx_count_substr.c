#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
	int i = 0;
	int n;
	if (str == NULL || sub == NULL)
		return -1;
	n = mx_strlen(sub);
	for (; *str; str++) {		
		if (*str == *sub) {
			if (mx_strncmp(str, sub, n) == 0)
				i++;
		}
	}
	return i;
	}
/*
int main() {
	char *str = "yo, yo, yo Neo";
	char *sub = NULL;
	printf ("%d", mx_count_substr(str, sub));
}*/
	
