#include "../inc/libmx.h"


char *mx_strstr(const char *haystack, const char *needle) {

	if ( haystack == NULL || needle == NULL)
		return NULL;
	int n = mx_strlen(needle);
	
	for (; *haystack; ++haystack)  {
		if ( *haystack == *needle) {
			if (mx_strncmp(haystack, needle, n) == 0) 
				return (char*)haystack;
		}	

	}
	return NULL;
}
