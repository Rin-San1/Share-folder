#ifndef MYCP_H
#define MYCP_H
#include <stdio.h>
/*функция читает файл в buff и возвозвращает количиство считаных байт*/
int read_file (void *buff, const unsigned int size, FILE *rf);

/*функция возвращает 0 если количество записанных байт равно size*/
int write_file (const void *buff, const int size, FILE *wf);

#endif

