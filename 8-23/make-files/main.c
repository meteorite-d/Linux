#include "cal.h"

int main()
{
  int x = 0;
  int y = 0;
  while(1){
    scanf("%d %d",&x,&y);
    int rt = MyAdd(x,y);
    printf("%d+%d=%d",x,y,rt);
  }
}

