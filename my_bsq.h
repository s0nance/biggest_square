#ifndef MY_BSQ_H_
#define MY_BSQ_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

typedef struct map {
    char *sv_map;
    int *buffer;
    int rows;
    int biggest;
    int skip;
    int index_buf;
    int top;
    int top_left;
    int left;
} map_t;

int main(int ac, char **av);
void my_bsq(char *filepath);
int skip_first_line(map_t *map);
int find_rows(map_t *map);
int *map_replaced(map_t *map);
int find_smallest(map_t *map);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int print_buffer(map_t *map);

#endif