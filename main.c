#include <stdio.h>
#include <string.h>
#include <math.h>



int main() {
  int d,m;
  scanf("%d%d", &d,&m);
  if (((m==4 || m==6 || m==9 || m==11) && d>30)||(m==2 && d>29))
  {
      printf("error");
  } else {
      printf("correct");
  }
    return 0;
}

