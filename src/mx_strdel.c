#include "../inc/libmx.h"
//#include <string.h>

void mx_strdel(char **str) {
	free(*str);
	*str = NULL;
}
/*
int main() {
   char *str = (char *)malloc((sizeof (char))*6);
   strcpy(str, "Hello");
   printf ("%s", str);
   mx_strdel(&str);
   printf ("%s", str);
   return 0;
}*/
