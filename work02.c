#include <stdio.h>

int main(){
  unsigned int a = 235343450;
  char * b = & a;

  printf("Decimal: %u \n",a);
  printf("Hexidecimal: %x \n", a);

  for(int i = 0; i < 4; i++){
    printf("byte : %hhx \n",*b);
    b++;
  }
  a = 235343450;
  b = &a;
  for(int i = 0; i < 4; i++){
    b += 1;
    *b += 1;
  }

  printf("New value after incrementing : %u\n", a);
  printf("New Hexidecimal after incremeting : %hhx \n",a);

  a = 235343450;
  b = &a;
  for(int i = 0; i < 4; i++){
    b += 16;
    *b += 1;
  }
  
  printf("New value after incrementing : %u\n", a);
  printf("New Hexidecimal after incremeting : %hhx \n",a);
}
    
