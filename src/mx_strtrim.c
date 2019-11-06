#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
	if ( str != NULL) {
		int i = 0;
		int n = mx_strlen(str);
		int len = 0;
		char *newstr;
		while (mx_isspace(str[n-1]) == 1)
            n--;
		while (mx_isspace(*str) == 1) {
			i++;
			str++;
		}
	
		len = n - i;
		newstr = mx_strnew(len);
		newstr = mx_strncpy(newstr, str, len);
		return newstr;
	}
	
	return NULL;
}
/*
int main() {
	char *name = "\f My name... is \r Neo \t\n ";

//	printf("%s\n", name);
//	char *name = "\f My name... is  Neo \r\t\n ";
	printf("%s", mx_strtrim(name));
//	printf("%d", mx_strlen(mx_strtrim(name)));
//	 mx_strtrim(name);
}*/
	
