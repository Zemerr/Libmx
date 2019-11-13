#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
	int fd = open(file , O_RDONLY);
	char c;
	char *str;
	int wd;
	int i = 0;
	int len = 0;	
	if (fd < 0)
		close(fd);	
	wd = read(fd, &c, 1);
	while(wd > 0) {
		wd = read(fd, &c, 1);
		len++;
	}
	close(fd);
	fd = open(file , O_RDONLY);
	if (fd < 0)
        close(fd);
	str = mx_strnew(len);
	wd = read(fd, &c, 1);
	while(wd > 0) {
        str[i] = c;
		wd = read(fd, &c, 1);
		i++;
    }
	close(fd);
	return str;
}
/*
int main(int argc, char *argv[]) {
	if (argc > 0)
		printf("%s", mx_file_to_str(argv[1]));
}*/
