#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    int n = mx_strlen(sub);
	int len_rep = mx_strlen(replace);
	int len_str = mx_strlen(str);
	int j = 0;
	int y = 0;
	int count = mx_count_substr(str, sub);
	int new_len = len_str - (count * n) + (count * len_rep);
	char *newstr = mx_strnew(new_len);	
//   Проверка на нулы	
    for (; *str != '\0'; str++) {
        if ( *str == *sub) {
            if ( mx_strncmp(str, sub, n) == 0) {
				y = 0;
                while ( replace[y] != '\0') {
        			newstr[j] = replace[y];
					y++;
					j++;
				}
			str = str + n - 1;
			}		
		}
		else {
			newstr[j] = *str;
			j++;
		}
	}
    
	return newstr;
}

/*
int main() {
	printf("%s", mx_replace_substr("McDonalds", "alds", "qqqqqqqqqq"));
//	printf("%s", mx_replace_substr("Ururu turu", "ru", "ta"));
}*/
