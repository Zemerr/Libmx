#include "../inc/libmx.h"



void mx_del_strarr(char ***arr) {
	for (int i = 0; (*arr)[i] != NULL; i++) 
		mx_strdel(&(*arr)[i]);
	free(*arr);
	*arr = NULL;
}
/*
int main() {
	char **arr = (char **)malloc(sizeof (char *)*5);
	for ( int i = 0; i < 5; i++) {
		arr[i] =  (char *)malloc(sizeof (char)*5);
	}
	arr[5] = NULL;
	mx_del_strarr(&arr);
	return 0;
}*/
