#include <stdio.h>
#include <string.h>
int main()
{
  int a;
  printf("nhap so:");//in thông báo
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("\n CHAN");
    
  }
  else
  {
    printf("\n LE");
  }
  return 0;
}