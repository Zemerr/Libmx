#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <wchar.h>
#include <stdlib.h>
#include <fcntl.h>

void mx_printchar(const char c);
void mx_swap_char(char *s1, char *s2);
int mx_get_char_index(const char *str, char c);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_nbr_to_hex(unsigned long nbr);
char *mx_strcpy(char *dst, const char *src);
void mx_swap_str(char **s1, char **s2);
int mx_isprint(char c);
double mx_pow(double n, unsigned int pow);

int mx_isspace(char c);

unsigned long mx_hex_to_nbr(const char *hex);

int mx_sqrt(int x);
int mx_strlen(const char *s);
int mx_bubble_sort(char **arr, int size);
int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);

void mx_printint(int n);
void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_print_unicode(wchar_t c);
void mx_foreach(int *arr, int size, void (*f)(int));
void mx_print_strarr(char **arr, const char *delim);
void mx_swap_int( int *i, int *y);

void mx_strdel(char **str);
char *mx_strndup(const char *s1, size_t n);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strstr(const char *haystack, const char *needle);
int mx_get_substr_index(const char *str, const char *sub);
int mx_count_substr(const char *str, const char *sub);
int mx_count_words(const char *str, char c);
char *mx_strtrim(const char *str);
char *mx_del_extra_spaces(const char *str);
char **mx_strsplit(const char *s, char c);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_file_to_str(const char *file);
int mx_read_line(char **lineptr, int buf_size, char delim, const int fd);
char *mx_replace_substr(const char *str, const char *sub, const char *replace);
int mx_strncmp(const char *s1, const char *s2, int n);
#endif
