
#include "proc.h"

void proc()
{
  char bar[NUM];
  const char *label="|/-\\";
  memset(bar,'\0',sizeof(bar));
  int i = 0;
  while(i<100){
    fflush(stdout);
    bar[i++]='#';
    printf("[%-100s][%%%3d][%c]\r",bar,i,label[i%4]);
    usleep(30000);
  }
  printf("\n");
}
