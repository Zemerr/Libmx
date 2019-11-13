#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
	char *first;
	char **arr = NULL;
	int count = 0;
	int len;
	int st;
	int l = 0;
	int word = mx_count_words(s, c);
	first = mx_strtrim(s);
		
	arr = (char **)malloc(sizeof (char *) * word + 1);
	if (s == NULL)
		return NULL;	
	for	(int i = 0; first[i] != '\0'; i++) {
		if ((first[i] == c && mx_isprint(first[i+1]) == 1 && 
		mx_isspace(first[i+1]) == 0 && first[i+1] != c) || (i == 0 && first[i] != c))  {
			if (i != 0)
				i++;
			count = i;
			while (first[count]  != c && first[count]  != '\0')
				count++;
			len = count - i;
			arr[l] = mx_strnew(len);
			
			st = 0;
			while (first[i] !=c && first[i]  != '\0') {
				arr[l][st] = first[i];
				st++;
				i++;
			}
			i--;
			l++;
		}
	}

	arr[l] = NULL;
	return arr;
}
/*
int main() {
//	char *s = NULL;
	char *s = " Knock, knock, Neo. ";
	char **arr =  mx_strsplit(s, ' ');
	for (int i = 0; arr[i] != NULL; i++) {
		printf("%s\n", arr[i]);
	}
	return 0;
}*/
				
			
				
				
						
				  
