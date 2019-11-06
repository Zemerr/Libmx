#include "../inc/libmx.h"

int mx_get_char_index(const char *str, char c) {
	if (str == NULL) 
		return -2;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == c)
			return i;
			
	} 
	return -1;
}
/*
int main() {
	const char *s = "HELLE";
	char c = 'E';
	printf("%d", mx_get_char_index(s, c));
	return 0;
}*/
