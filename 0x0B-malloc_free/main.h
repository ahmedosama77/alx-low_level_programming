#ifndef MAIN_H
#define MAIN_H

char *creat_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *_str_concat(char *s2, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif