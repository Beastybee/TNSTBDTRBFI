
#ifndef SHORTENER
#define SHORTENER
#include <stdio.h>

struct stat st;

const char* shortener(char* const file, const char threadNum);
char* const readNthLine(FILE* const fp, const char* const fileName);

#endif
