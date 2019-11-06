#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
	int i = 0;
	int count = 0;

	if (str == NULL || *str == 0)
		return -1;
	for (; str[i] != '\0'; i++) {
		
		if (str[i] == c && str[i+1] != '\0' && str[i+1] != c)
             count++;
	}
	if (count != 0 && str[0] != c)
		count++;
	return count;
}


/*			
int main() {
   char *str1 = "   *frsdgerg * follow";


//	char *str1 = "* ";


//	char *str = "gdf ";
//	char *str = " follow * the white rabbit ";

//	char *str = "*********** f";

//	char *str = "    ";
//	printf("%d\n", mx_count_words(str, '*'));
//	printf("%d\n", mx_count_words(str, ' '));
	printf("%d\n", mx_count_words(str1, 'F'));
//	printf("%d\n", mx_count_words(str, '^'));
}*/	