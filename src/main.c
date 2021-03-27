#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*
TNSTBDTRBFI
The not so terrible but difficult to remember brainfuck interpreter
*/

#include "main.h"

int main(int argc, char *argv[]) {

  char* cells = (char*) malloc(sizeof(char) * 1000);
  uint16_t cellIndex = 0;

  pthread_t thread1;
  pthread_t thread2;
  pthread_t thread3;
  pthread_t thread4;

  int lengths[4];
  char threadIsFinished = 0; // for boolean packing

  const char* c;
  FILE* fptr;
  if ((fptr = fopen(argv[1], "r")) == NULL)
  {
    printf("Error! opening file");
    exit(1);
  }

  readNthLine(fptr, argv[1]);

  return 0;
}
