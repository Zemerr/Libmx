#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
	if (arr != NULL || delim != NULL) {
		for (int i = 0; arr[i] != NULL; i++) {
			mx_printstr(arr[i]);
		if ( arr[i+1] != NULL)	
			mx_printstr(delim);
	
		}
	write(1, "\n", 1);
	}
}
/*
int main() {
	char *arr[4] = {"Hello", "World", "Test", 0};
	const char *delim = "ACAB";
	mx_print_strarr(arr, delim);
	return 0;
}*/
