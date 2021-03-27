#include <sys/stat.h>

#include <string.h>
#include <pthread.h>
#include <stdlib.h>

#include "fileOps.h"

const char* shortener(char* const file, const char threadNum)
{
  const char* output;
  for(int i = 0; i <= (strlen(file) - 1); i++)
  {
    switch(file[i])
    {
      case '>' : output += '>';
      case '<' : output += '<';
      case '+' : output += '+';
      case '-' : output += '-';
      case '.' : output += '.';
      case ',' : output += ',';
      case '[' : output += '[';
      case ']' : output += ']';
      default  : ;
    }
  }
  return output;
}

// returns return code. 0 for success and -1 for failure
char* const readNthLine(FILE* const fp, const char* const fileName)
{
  stat(fileName, &st);
  int size = st.st_size;

  printf("%d ", size);

  char* str = (char *) malloc(size);

  str = fgets(str, size, fp);

  // printf("%s", str);

  fclose(fp);
  return str;
}
