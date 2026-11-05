#include <stdio.h>
int main() 
{
  float dtb=8.0,drl=80;
  scanf("%f%d",&dtb,&drl);
  if(dtb>=9.0 && drl>=90);
  {
    printf("HOC_BONG_XUAT_SAC");
  }
  if else((8.0<=dtb<9.0 || dtb>=9.0) && (80<=drl<90 || drl>=90))
  {
    printf("HOC_BONG_GIOI");
  }
   if else((7.0<=dtb<8.0 || dtb>=9.0|| 8.0<=dtb<9.0) && (70<=drl<80 ||drl>=90|| 80<=drl<90))
  {
    printf("HOC_BONG_KHA");
  }
   else(dtb<7.0 && drl<70)
  {
    printf("KHONG-DAT");
  }
  
  return 0;
}