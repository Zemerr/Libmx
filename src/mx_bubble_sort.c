#include "../inc/libmx.h"
//#include <stdio.h>
int mx_bubble_sort(char **arr, int size) {
	int i = 0;
	int count = 0;
	char *buf = "";
	while (i == 0) {
		i = 1;
		for ( int x = 0; x < size-1; x++) {
			if (mx_strcmp(arr[x], arr[x + 1]) > 0) {
				buf = arr[x];
				arr[x] = arr[x+1];
				arr[x+1] = buf;		
				i = 0;
				count++;
			}
		}
	}
	return count;
}
/*
int main() {
	char *arr[] = {"abc", "xyz", "ghi", "def"};
	printf("%d", mx_bubble_sort(arr, 4));
	return 0;
}*/
