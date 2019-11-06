#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
	int i = 0;
	while (s1[i])
		i++;
	for (int j = 0; s2[j] != '\0'; j++) {
		s1[i] = s2[j];
		i++;
	}
	return s1;
	
}
/*
int main() {
	char *t = "Hello";
	char *restrict s1 = mx_strnew(10);
	s1 = mx_strcpy(s1 , t);

	char *h = "World";
	char *restrict s2 =  mx_strnew(5);
	s2 = mx_strcpy(s2, h);
	printf("%s", mx_strcat(s1, s2));
	return 0;
}*/
	

