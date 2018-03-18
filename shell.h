#ifndef SH_H
#define SH_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int _strlen(char *str);

void str_cmb(char **buffer, char *str1, char *str2);

char *_strcpy(char *src);

/*char **get_path(void);*/
char **make_array(char *str, char delim);

int str_compare(char *s1, char *s2);

void prepend(char c, char *buffer);

ssize_t _getline(char **lineptr, size_t *n, int fd);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

void err_exit(char *prog, char err_type);

int _atoi(char *s);

void exit_command(char *num);

#endif
